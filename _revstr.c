#include "main.h"

/**
 * _revstr - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */

void _revstr(char *s)
{
int length = 0;
int start = 0;
int end;
char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}

}
