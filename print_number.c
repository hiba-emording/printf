#include "main.h"

/**
 * print_number - Prints an unsigned int in a chosen base.
 * @n: The unsigned integer to be printed.
 * @base: The base.
 * @uppercase: Set to 1 to print uppercase letters, 0 for lowercase.
 *
 * Return: number of chars printed.
 */

int print_number(unsigned int n, int base, int (*uppercase)(int))
{
int count = 0;
char digit;
int remains;

	if (n == 0)
	{
		_printchar('0');
		count++;
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
				if (uppercase)
				{
					digit = remains - 10 + 'A';
				}
				else
				{
					digit = remains - 10 + 'a';
				}
			}

			_printchar(digit);
				count++;
				n /= base;
		}
	}

	return (count);
}
