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
int i;
int l = 0;

	if (s == NULL)
	{
		s = "(null)"

		while (s[l] != '\0')
		{
			l++;
		}

		for (i = l - 1; i >= 0; i--)
		{
			_printchar(s[i]);
		}

	}
	return (l);
}
