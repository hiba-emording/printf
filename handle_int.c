#include "main.h"

/**
 * handle_int - prints an int.
 * @args: A va_list containing the intger to be printed.
 * Return: number of chars printed.
 */

int handle_int(va_list args)
{
int n = va_arg(args, int);
int count = 0, div = 1;
int temp = n, digit;

	if (n < 0)
	{
		_printchar('-');
		count++;
	}
	if (n == 0)
	{
		_printchar('0');
		count++;
	}
	else
	{
		while (temp > 9 || temp < -9)
		{
			temp /= 10;
			div *= 10;
		}
		if (n < 0)
		{
			temp = -n;
		}
		else
		{
			temp = n;
		}
		while (div > 0)
		{

			digit = (temp / div) + '0';
			_printchar(digit);
			count++;
			temp %= div;
			div /= 10;
		}
	}
	return (count);
}
