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

int count = 0;

	count += _printchar('0');
	count += _printchar('x');

	count += print_number((unsigned long)ptr, 16, 0);

	return (count);
}
