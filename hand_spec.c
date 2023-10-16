#include "main.h"

/**
 * handspec - Process format specifiers for _printf.
 * @format: Format specifier.
 * @args: va_list of args.
 *
 * Return: num of chars printed.
 */

int handspec(const char *format, va_list args)
{
spec_map s_m[] = {
{'s', handle_string},
{'c', handle_char},
{'%', handle_percent},
{'d', handle_int},
{'i', handle_int},
{'b', handle_binary},
{'u', handle_unsigned},
{'o', handle_octal},
{'x', handle_hex},
{'X', handle_hex},
};

int count = 0;
size_t i;

	for (i = 0; i < sizeof(s_m) / sizeof(s_m[0]); i++)
	{
		if (*format == s_m[i].spec)
		{
			count += s_m[i].hand(args);
			break;
		}
	}

	return (count);
}
