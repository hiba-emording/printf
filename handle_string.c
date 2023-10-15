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
		s = "(null)";
		len = _strlen(s);

		for (i = 0; i < len; i++)
		{
			_printchar(s[i]);
		}
		return (len);
	}

	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			_printchar(s[i]);
		}

		return (len);
	}
}
