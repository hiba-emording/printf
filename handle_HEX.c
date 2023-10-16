#include "main.h"

/**
 * handle_HEX - prints unsigned int in hex uppercase.
 * @args: A va_list containing number to be printed.
 *
 * Return: number of chars printed.
 */

int handle_HEX(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
int count = 0;

        if (n == 0)
        {
                count += _printchar('0');
        }

        else
        {
                count += print_number(n, 16, 1);
        }

        return (count);
}
