#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string.
 *
 * This programm is a custom printf function that handles 'c' - 's' - '%'.
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
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				i++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);
				int len = 0;

				while (s[len])
				len++;
				write(1, s, len);
				i += len;
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				i++;
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
