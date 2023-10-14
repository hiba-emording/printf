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
    size_t ctr1, ctr2 = 0, count = 0;

    char specifiers[] = {'c', 's', '%', 'i', 'd', 'b'};

    int (*handlers[])(va_list) = {_print_char, _print_string, _print_percent, _print_binary, _print_int, _print_int};

    va_start(args, format);

    while (format && format[ctr2])
    {
        if (format[ctr2] == '%')
        {
            ctr2++;

            if (format[ctr2] == '\0')
            {
                return (-1);
            }
            else
            {
                for (ctr1 = 0; ctr1 < sizeof(specifiers) / sizeof(specifiers[0]); ctr1++)
                {
                    if (format[ctr2] == specifiers[ctr1])
                    {
                        count += handlers[ctr1](args);
                        break;
                    }
                }
            }
        }
        else
        {
            count += write(1, &format[ctr2], 1);
        }
        ctr2++;
    }
    va_end(args);
    return (count);
}
