#include "main.h"

/**
 * handle_rev - Handle the %r.
 * @args: A va_list containing the string to be reversed.
 *
 * Return: Number of characters printed.
 */

int handle_rev(va_list args)
{
char *s = va_arg(args, char *);
int l = 0;
int i = 0;
int count = 0;

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i] != '\0')
	{
		i++;
	}

	for (l = i - 1; l >= 0; l--)
	{
		_printchar(s[l]);
		count++;
	}

	return (count);
}
