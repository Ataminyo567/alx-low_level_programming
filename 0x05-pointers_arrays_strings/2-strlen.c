#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: the string
 *
 * Return: The length of @str.
 */

int _strlen(char *s)
{

	int length;

	length = 0;

	while (s[length])
		length++;

	return (length);

}
