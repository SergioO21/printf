#include "holberton.h"

/**
 * print_string - Print a string.
 *
 * @args: List of arguments.
 *
 * Return: The number of characters printed.
 */

int print_string(va_list args)
{
	unsigned int i;
	char *s;

	s = va_arg(args, char*);

	if (s == NULL)
	{
		_printf("(null)");
		return (6);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	return (i);
}
