#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int handspec(const char *format, va_list args);

typedef int (*spec_hand)(va_list);

/**
 * struct spec_map - map format specifiers to their handler functions.
 * @spec: specifier character.
 * @hand: handler function for specifier.
 */

struct spec_map
{
	char spec;
	spec_hand hand;
};


int handle_char(va_list args);
int handle_string(va_list args);
int handle_percent(va_list args);
int handle_int(va_list args);
int handle_binary(va_list args);

#endif
