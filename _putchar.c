#include "main.h"

/**
 * _putchar - function puts given char to stdout stream
 * @c: character to be put in stdout
 * Return: On success 1
 */
int _putchar(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	if (c != -1)
	{
		buffer[i++] = c;
	}
	return (1);
}
