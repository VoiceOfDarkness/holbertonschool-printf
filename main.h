#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int print_string(va_list);
int print_char(va_list);

/**
 * struct print - struct for printing
 * @type: type of data
 * @f: function to print
 */
typedef struct _format
{
        char type;
	int (*f)(va_list);
} format_t;

#endif // !PRINT_F
