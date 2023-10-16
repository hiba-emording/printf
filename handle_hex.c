#include "main.h"

/**
 * handle_hex - prints unsigned int in hex lowercase.
 * @args: A va_list containing number to be printed.
 *
 * Return: number of chars printed.
 */

int handle_hex(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
int count = 0;

	if (n == 0)
	{
		count += _printchar('0');
	}

	else
	{
		count += print_number(n, 16, 0);
	}

	return (count);
}
