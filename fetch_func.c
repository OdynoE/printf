#include "main.h"

/**
 * fetch_func - this fetches the handler for a specifier
 * @string: Represents the string
 * @idx: represents the index of the element after % symbol
 *
 * Whenever the % symbol is encountered, this function is calle
 * d from the _printf function.
 * if the character encountered after the % sign is not a specifier,
 * it returns NULL and prints just the % sign
 *
 * Return: It returns a pointer to the specifier function or NULL
 */

int (*fetch_func(const char *string, int idx))(va_list)
{

/* fncs is a structure array that contains the specifier and its function */
spec_ref fncs[] = {
		{"c", print_char}, {"s", print_string}, {"%", print_percentage}

	};

	int q = 0, j = 0;

	if (string)
	{
		while (fncs[q].ref != NULL)
		{
			if (fncs[q].s[j] == string[idx])
			{
				if (fncs[q].s[j + 1] == '\0')
				{
					return (fncs[q].ref);
				}
				else
				{
					q--;
					j++;
					idx++;
				}
			}
			q++;
		}
	}
	return (NULL);
}
