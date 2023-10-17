#include "main.h"

/**
 * print_positive_int - print a positive integer.
 * @n: integer to print.
 * Return: number of characters printed.
 */

int print_positive_int(unsigned int n)
{
int count = 0, div = 1;
int temp = n, digit;

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
