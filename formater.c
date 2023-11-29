#include "main.h"

int string_parser(const char *format, va_list args)
{
	int size, i, args_len;

	size = i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			args_len = type_checker(format, args, &i);
			if (args_len == -1)
				return -1;

			size += args_len;
		}
		else
		{
			_putchar(format[i]);
			size++;
		}

		i++;
	}

	return (size);
}

int type_checker(const char *str, va_list args, int *i)
{
	int size, j, all;

	format pakize[] = {
	    {'s', print_string}, {'c', print_char}};

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	all = sizeof(pakize) / sizeof(pakize[0]);

	for (size = j = 0; j < all; j++)
	{
		if (str[*i] == pakize[j].type)
		{
			size = pakize[j].f(args);
			return (size);
		}
	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}
