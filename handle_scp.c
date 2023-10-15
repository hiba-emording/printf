#include "main.h"

/**
 * handle_char - prints a char.
 * @args: A va_list containing the char to be printed.
 * Return: number of chars printed.
 */

int handle_char(va_list args)
{
char c = va_arg(args, int);
int count = 0;

write(1, &c, 1);
count++;

return (count);
}

/**
 * handle_string - prints a str.
 * @args: A va_list containing the string to be printed.
 * Return: number of chars printed.
 */

int handle_string(va_list args)
{
char *s = va_arg(args, char *);
int len = 0, count = 0;

	while (s && s[len] != '\0')
	{
		len++;
	}
	if (len > 0)
	{
		write(1, s, len);
		count += len;
	}
	return (count);
}

/**
 * handle_percent - prints a % sympol.
 * @args: A va_list that is not used.
 * Return: number of chars printed (1).
 */

int handle_percent(va_list args)
{
int count = 0;

(void)args;

	write(1, "%", 1);
	count++;

return (count);
}
