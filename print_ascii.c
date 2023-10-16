#include "main.h"

/**
 * print_ascii_hex - Print ASCII value in uppercase with 2 chars.
 * @c: character to be printed.
 *
 * Return: number of characters printed.
 */

int print_ascii_hex(char c)
{
char hex_digits[] = "0123456789ABCDEF";
unsigned char uc = (unsigned char)c;
char first, second;

first =	(hex_digits[uc / 16]);
_printchar(first);

second = (hex_digits[uc % 16]);
_printchar(second);

return (2);
}
