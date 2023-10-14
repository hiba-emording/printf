#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string.
 *
 * This programm is a custom printf function that handles,
 * b: the unsigned int argument is converted to binary.
 *
 * Return: number of characters printed (excluding null byte).
 */

int _printf(const char *format, ...)
{
int i = 0;
va_list args;

va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'b')
			{
				unsigned int n = va_arg(args, unsigned int);

				i += _print_binary(n);
			}

			else
			{
				write(1, format, 1);
				i++;
			}
		}
		else
		{
			write(1, format, 1);
			i++;
		}

		 format++;
	}
	va_end(args);
	return (i);
}

/**
 * _print_binary - prints an unsigned int in binary.
 * @n: unsigned int to print.
 * Return: number of chars printed.
 */

int _print_binary(unsigned int n)
{
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
