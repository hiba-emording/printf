#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string.
 *
 * This programm is a custom printf function that handles 'd' - 'i'.
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

			if (*format == 'd' || *format == 'i')
			{
				int n = va_arg(args, int);

				i += _print_int(n);
			}

			else
			{
				i += write(1, format, 1);
			}
		}
		else
		{
			i += write(1, format, 1);
		}

		format++;
	}
	va_end(args);
	return (i);
}

/**
 * _print_int - prints an int.
 * @n: integer to print.
 * Return: number of chars printed.
 */

int _print_int(int n)
{
int i = 0;
int div = 1;
int temp = n;

	if (n < 0)
	{
		write(1, "-", 1);
		i++;
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

		char digit = (temp / div) + '0';

		write(1, &digit, 1);
		i++;
		temp %= div;
		div /= 10;
	}

	return (i);
}
