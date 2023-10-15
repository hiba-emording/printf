#include "main.h"

/**
 * handle_binary - prints an unsigned int in binary.
 * @args: A va_list containing unsigned int to be printed.
 * Return: number of chars printed.
 */

int handle_binary(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
int i = 0;
int j = 0;
int bdig[32];
char dig;

	if (n == 0)
	{
		i += write(1, "0", 1);
	}

	else
	{
		while (n > 0)
		{
			bdig[j++] = n % 2;
			n /= 2;
		}

		for (j--; j >= 0; j--)
		{
			dig = bdig[j] + '0';

			i += write(1, &dig, 1);
		}
	}

	return (i);
}
