#include "main.h"

/**
 * handle_char - prints a char.
 * @args: A va_list containing the char to be printed.
 * Return: number of chars printed.
 */

int handle_char(va_list args)
{
char c = va_arg(args, int);

char null_char = '\0';

int count = 0;

	if (c == '\0')
	{
		_printchar(null_char);
		count++;
	}

	else
	{
		_printchar(c);
		count++;
	}

	return (count);
}
