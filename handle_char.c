#include "main.h"

/**
 * handle_char - prints a char.
 * @args: A va_list containing the char to be printed.
 * Return: number of chars printed (1).
 */

int handle_char(va_list args)
{
char c = va_arg(args, int);

_printchar(c);

return (1);
}
