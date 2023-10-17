#include "main.h"

/**
 * handle_rot13 - Handle %R.
 * @args: A va_list containing the string to be ROTed.
 *
 * Return: number of characters printed.
 */

int handle_rot13(va_list args)
{
char *s = va_arg(args, char *);
int count = 0;

	if (s)
	{
		s = rot13(s);

		while (*s)
		{
			_printchar(*s);
			count++;
			s++;
		}
	}

	return (count);
}
