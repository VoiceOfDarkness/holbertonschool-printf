#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = string_parser(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
}
