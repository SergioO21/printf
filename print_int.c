#include "holberton.h"

/**
 * print_int - Print an int.
 *
 * @args: List of arguments.
 *
 * Return: The number of characters printed.
 */

int print_int(va_list args)
{

	long int i2, i;
	char *s;

	i = va_arg(args, int);

	s = _itoa(i, 10);

	for (i2 = 0; s[i2] != '\0'; i2++)
	{
		_putchar(s[i2]);
	}
	return (i2);
}
