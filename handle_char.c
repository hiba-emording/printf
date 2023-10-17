#include "main.h"

/**
 * handle_char - prints a char.
 * @args: A va_list containing the char to be printed.
 * Return: number of chars printed.
 */

int handle_char(va_list args)
{
char *c = va_arg(args, char *);

char *nil_str = "(nil)";

int count = 0;

	if (c == NULL)
	{
		while (*nil_str)
		{
			_printchar(*nil_str);
			count++;
			nil_str++;
		}

	}

	else
	{
		_printchar(*c);
		count++;
	}

	return (count);
}
