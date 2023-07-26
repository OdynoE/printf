#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

/**
 * struct specifier - Struct operation.
 * * @s: The format specifier.
 * @ref: Prints data with the specifier.
 */

typedef struct specifier
{
	char *s;
	int (*ref)(va_list);
} spec_ref;


int _putchar(char c);
int _printf(const char *format, ...);


/* function prototypes for conversion specifier*/
int print_char(va_list);
int print_string(va_list);
int print_percentage(va_list __attribute__((unused)) lists);
int (*fetch_func(const char *string, int idx))(va_list);
int print_unsigned_decimal(va_list);
int print_unsigned_hexadecimal(va_list);
int print_oct(va_list);


#endif
