#include "main.h"

/**
 * handle_char - prints a char.
 * @args: A va_list containing the char to be printed.
 * Return: number of chars printed.
 */


int handle_char(va_list args)
{
char c = va_arg(args, int);

return (write(1, &c, 1));
}

/**
 * handle_string - prints a str.
 * @args: A va_list containing the string to be printed.
 * Return: number of chars printed.
 */


int handle_string(va_list args)
{
char *s = va_arg(args, char *);
int len = 0;

while (s[len])
len++;

return (write(1, s, len));
}

/**
 * handle_percent - prints a % sympol.
 * @args: A va_list that is not used.
 * Return: number of chars printed (1).
 */


int handle_percent(va_list args)
{
(void)args;

return (write(1, "%", 1));
}
