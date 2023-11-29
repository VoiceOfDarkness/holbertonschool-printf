#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

/* print.c */
int print(char *);

/* _printf.c */
int _printf(const char *, ...);

/* formater.c */
int string_parser(const char *, va_list);
int type_checker(const char *, va_list, int *);

/* print functions */
int print_string(va_list);
int print_char(va_list);
int print_int(va_list);
int print_decimal(va_list);

/* _putchar.c */
int _putchar(char);
int buffer(char);

/**
 * struct print - struct for printing
 * @type: type of data
 * @f: function to print
 */
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif
