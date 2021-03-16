#include "holberton.h"

/**
 * _strlen - Count the length of a string.
 *
 * @s: String pointer.
 *
 * Return: Length of the string.
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}
