#include "main.h"

/**
 * handle_string - prints a str.
 * @args: A va_list containing the string to be printed.
 * Return: number of chars printed.
 */

int handle_string(va_list args)
{
char *s = va_arg(args, char *);
int count = 0;
char *null_string = "(null)";

	if (s)
	{
		while (*s)
		{
			_printchar(*s);
			count++;
			s++;
		}
	}

	else
	{
		while (*null_string)
		{
			_printchar(*null_string);
			count++;
			null_string++;
		}
	}

	return (count);
}
