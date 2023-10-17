#include "main.h"

/**
 * rot13 - Helper function encodes a string using ROT13.
 * @str: Pointer to the input string.
 *
 * This function applies the ROT13 algorithm to the input string, where each
 * alphabetical character is shifted 13 positions in the alphabet.
 *
 * Return: A pointer to the modified string.
 */

char *rot13(char *str)

{
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i;
int j;
	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; alphabet[j] != '\0'; j++)
		{

			if (str[i] == alphabet[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}

	return (str);
}
