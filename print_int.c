#include "main.h"

/**
 * print_int - prints an integer
 * @list: list of arguments
 * Return: number of characters printed
 */
int print_int(va_list list)
{
        char *num;
        int size;

        num = citoa(va_arg(list, int), 10);

        size = print((num != NULL) ? num : "NULL");

        return (size);
}

