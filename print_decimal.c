#include "main.h"

/**
 * print_decimal - prints decimal number
 * @list: number
 * Return: size of string
 */
int print_decimal(va_list list)
{
	char *num;
	int size;

	num = citoa(va_arg(list, int), 10);
	size = print((num != NULL) ? num : "NULL");

	return (size);
}
