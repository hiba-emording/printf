#include "main.h"

/**
 * handle_pointer - prints pointer in hex.
 * @args: A va_list containing pointer adress to be printed.
 *
 * Return: number of chars printed.
 */

int handle_pointer(va_list args)
{
void *ptr = va_arg(args, void*);
char *nil_str = "(nil)";
int count = 0;
int i;

	if (ptr == NULL)
	{
		for (i = 0; nil_str[i] != '\0'; i++)
		{
			_printchar(nil_str[i]);
			count++;
		}
	}

	else
	{
		count += _printchar('0');
		count += _printchar('x');

		count += print_number((unsigned long)ptr, 16, 0);
	}

	return (count);
}
