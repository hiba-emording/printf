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
int count = 0;
int len;
int i;

	if (s)
	{
		_revstr(s);
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			_printchar(s[i]);
			count++;
		}

		return (count);
	}

	return (0);
}
