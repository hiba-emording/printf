#include "main.h"

/**
 * handle_int - prints an int.
 * @args: A va_list containing the intger to be printed.
 * Return: number of chars printed.
 */

int handle_int(va_list args)
{
int n = va_arg(args, int);
int count = 0;

	if (n == INT_MIN)
	{
		count += _printchar('-');
		count += print_positive_int(214748364);
		count += _printchar('8');
	}

	else if (n < 0)
	{
		_printchar('-');
		count++;
		count += print_positive_int(-n);
	}

	else
	{
		count += print_positive_int(n);
	}

	return (count);
}
