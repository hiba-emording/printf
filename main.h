#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct spec_map - map format specifiers to their handler functions.
 * @spec: specifier character.
 * @hand: handler function for specifier.
 */

typedef struct spec_map
{
	char spec;
	int (*hand)(va_list);
} spec_map;


int _printchar(char c);
int _strlen(char *s);
int print_number(unsigned long n, int base, int uppercase);
int print_ascii_hex(char c);

int _printf(const char *format, ...);
int handspec(const char *format, va_list args);


int handle_char(va_list args);
int handle_string(va_list args);
int handle_percent(va_list args);
int handle_int(va_list args);
int handle_binary(va_list args);
int handle_unsigned(va_list args);
int handle_octal(va_list args);
int handle_hex(va_list args);
int handle_HEX(va_list args);
int handle_sp_str(va_list args);
int handle_pointer(va_list args);


#endif
