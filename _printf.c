#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string.
 *
 * Return: number of characters printed (excluding the null byte).
 */

int _printf(const char *format, ...)
{
int count = 0;
va_list args;

va_start(args, format);

	while (*format != '\0')
	{

		if (*format == '%')
		{
			format++;
			handspec(format, args);
		}

		else
		{
			_printchar(*format);
		}
		count++;
		format++;
	}

	va_end(args);

	return (count);
}
