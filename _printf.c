#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: contains the conversion specifiers
 * Return: the total number of the characters printed
 */

int _printf(const char *format, ...)
{
	va_list lists;
	int q = 0, char_printed = 0;
	int (*funct_ptr)(va_list);

	if (!format)
		return (-1);
	if (!format[q])
		return (0);

	va_start(lists, format);
	for (q = 0; format[q] != '\0'; q++)
	{
		if (format[q] == '%')
		{
			if (format[q + 1] == '\0')
				return (-1);
			funct_ptr = fetch_func(format, q + 1);
			if (funct_ptr == NULL)
			{
				_putchar('%');
				char_printed++;
			}
			else
			{
				char_printed += funct_ptr(lists);
			}
		}
		else
		{
			_putchar(format[q]);
			char_printed++;
		}
	}
	return (char_printed);
}
