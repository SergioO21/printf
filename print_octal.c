#include "holberton.h"

/**
 * print_octal - Print an unsigned integer as an octal number.
 *
 * @args: List of arguments.
 *
 * Return: The number of characters printed.
 */

int print_octal(va_list args)
{
long int i2, i;
	char *s;

	i = va_arg(ap, unsigned int);
	s = _itoa(i, 8);

	for (i2 = 0; s[i2] != '\0'; i2++)
	{
		_putchar(s[i]);
	}
	return (i2);

}
