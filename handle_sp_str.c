#include "main.h"

/**
 * handle_sp_str - Handle 'S' specifier.
 * @args: A va_list containing the string.
 *
 * Return: number of characters printed.
 */

int handle_sp_str(va_list args)
{
char *s = va_arg(args, char *);
int count = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (*s)
	{
		if (*s < 32 || *s >= 127)
		{
			count += _printchar(92);
			count += _printchar('x');
			count += print_ascii_hex(*s);
		}

		else
		{
			count += _printchar(*s);
		}
		s++;
	}

	return (count);
}
