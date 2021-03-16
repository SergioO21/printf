#include "holberton.h"

/**
 * print_uint - Print an unsigned int.
 *
 * @args:  List of arguments.
 *
 * Return: The number of characters printed.
 */

int print_uint(va_list args)
{
	long int i, i2;
	char *s;

	i = va_arg(args, unsigned int);

	s = _itoa(i, 10);

	for (i2 = 0; s[i2] != '\0'; i2++)
	{
		_putchar(s[i2]);
	}
	return (i2);
}
