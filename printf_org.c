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
size_t k, j = 0, count = 0;
char specifiers[] = {'c', 's', '%', 'i', 'd', 'b'};
int (*handlers[])(va_list) = {_print_char, _print_string, _print_percent,
_print_binary, _print_int, _print_int};

va_start(args, format);
	while (format && format[j])
	{
		if (format[j] == '%')
		{
			j++;
			if (format[j] == '\0')
			{
				return (-1);
			}
			else
			{
				for (k = 0; k < sizeof(specifiers) / sizeof(specifiers[0]); k++)
				{
					if (format[j] == specifiers[k])
					{
						count += handlers[k](args);
						break;
					}
				}
			}
		}
		else
		{
			count += write(1, &format[j], 1);
		}
		j++;
	}
	va_end(args);
	return (count);
}
