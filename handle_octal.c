#include "main.h"

/**
 * handle_octal - prints an unsigned int in octal.
 * @args: A va_list containing unsigned int to be printed.
 * Return: number of chars printed.
 */

int handle_octal(va_list args)
{
unsigned int o = va_arg(args, unsigned int);
int count = 0;

	if (o == 0)
	{
		count += _printchar('0');
	}

	else
	{

		count += print_number(o, 8, 0);
	}

	return (count);
}
