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
int temp;
char digit;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
		temp = n
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

		write(1, &digit, 1);
		count++;
		temp %= div;
		div /= 10;
	}

	return (count);
}
