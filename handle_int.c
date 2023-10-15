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
int div = 1;
int temp = n;
int digit;

	if (n < 0)
	{
		_printchar('-');
		count++;
		n = -n;
	}

	while (temp > 9)
	{
		temp /= 10;
		div *= 10;
	}

	temp = n;

	while (div > 0)
	{

		digit = (temp / div) + '0';

		_printchar(digit);
		count++;
		temp %= div;
		div /= 10;
	}

	return (count);
}
