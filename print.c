#include "main.h"

/**
 * print - Print string
 * @str: string to print
 *
 * Return: String length.
 */
int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}
