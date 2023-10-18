#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string.
 *
 * Return: number of characters printed (excluding the null byte).
 */

int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
{
	return (-1);
}

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			while (*format == ' ')
			{
				format++;
			}
			count += handspec(format, args;)
		}

		else
		{
			_printchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);

	return (count);
}
