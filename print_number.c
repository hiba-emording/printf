#include "main.h"

/**
 * print_number - Prints an unsigned int in a chosen base.
 * @n: The unsigned integer to be printed.
 * @base: The base.
 * @uppercase: to handle upper and lower.
 * Return: number of chars printed.
 */

int print_number(unsigned long n, int base, int uppercase)
{
int digits[64], count = 0, i = 0, remains;
char digit;

	if (n == 0)
	{
		count += _printchar('0');
	}
	else
	{
		while (n > 0)
		{
			remains = n % base;
			if (remains < 10)
			{
				digit = remains + '0';
			}
			else
			{
				if (uppercase == 1)
				{
					digit = remains - 10 + 'A';
				}
				else if (uppercase == 0)
				{
					digit = remains - 10 + 'a';
				}
			}
			digits[i] = digit;
			i++;
			n /= base;
		}
		for (i = i - 1; i >= 0; i--)
		{
			_printchar(digits[i]);
			count++;
		}
	}

	return (count);
}
