#include "main.h"

/**
 * handle_unsigned - prints an unsigned int.
 * @args: A va_list containing unsigned int to be printed.
 * Return: number of chars printed.
 */

int handle_unsigned(va_list args)
{
unsigned int u = va_arg(args, unsigned int);
int count = 0;

	if (u == 0)
	{
		count += _printchar('0');
	}

	else
	{
		count += print_number(u, 10, 0);
	}

	return (count);
}
