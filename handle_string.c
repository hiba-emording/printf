#include "main.h"

/**
 * handle_string - prints a str.
 * @args: A va_list containing the string to be printed.
 * Return: number of chars printed.
 */

int handle_string(va_list args)
{
char *s = va_arg(args, char *);
int len, i;

	if (s == NULL)
	{
		return (0);
	}

	else
	{
		len = _strlen(s);
		for (i = 0; (s[i] != '\0'); i++)
		{
			_printchar(s[i]);

		}

		return (len);
	}
}
