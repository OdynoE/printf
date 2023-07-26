#include "main.h"

/**
 * print_string - prints a string using a loop and also counts the
 * characters printed.
 * @lists: represents arguments
 * Return: The count of iterator
 */
int print_string(va_list lists)
{
	int q;
	char *string;

	string = va_arg(lists, char *);
	if (string == NULL)
		return (0);

	for (q = 0; string[q] != '\0'; q++)
	{
		_putchar(string[q]);
	}
	return (q);
}
