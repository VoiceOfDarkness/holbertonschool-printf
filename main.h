#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

int print(char *);

int _printf(const char *, ...);

int string_parser(const char *, va_list);
int type_checker(const char *, va_list, int *);

int print_string(va_list);
int print_char(va_list);


int print_integer(va_list);

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
