#include "main.h"

/**
 * print_char - prints character
 * @lists: represents arguments
 * Return: 1, the no of char printed
 */
int print_char(va_list lists)
{
	char s;

	s = va_arg(lists, int);
	_putchar(s);

	return (1);
}
