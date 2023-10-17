#include "main.h"

/**
 * handle_rot13 - Handle %R.
 * @args: A va_list containing the string to be ROTed.
 *
 * Return: number of characters printed.
 */

int handle_rot13(va_list args)
{
char *s = va_arg(args, char *);
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
int match, count = 0;

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i]; i++)
	{
		match = 0;

		for (j = 0; alphabet[j] && !match; j++)
		{
			if (s[i] == alphabet[j])
			{
				_printchar(rot13[j]);
				count++;
				match = 1;
			}
		}

		if (!match)
		{
			_printchar(s[i]);
			count++;
		}
	}

	return (count);
}
