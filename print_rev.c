#include "holberton.h"

/**
 * print_rev - Print a string in reverse.
 *
 * @args: List of arguments.
 *
 * Return: The number of characters printed.
 */

int print_rev(va_list args)
{
	int len, i;
	char *s;
	char c;

	s = va_arg(args, char*);
	len = _strlen(s);

	i = len;
	len--;

	while (len >= 0)
	{
		c = s[len];

		_putchar(c);

		len--;
	}
	return (i);
}
