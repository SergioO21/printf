#include "holberton.h"

/**
 * print_hexa_m - Print an unsigned integer as a hexadecimal number(UPPERCASE).
 *
 * @args: List of arguments.
 *
 * Return: The number of characters printed.
 */

int print_hexa_m(va_list args)
{
	unsigned int i, i2, count;
	int p;
	char c;
	unsigned int a[100];
	char values[] = "0123456789ABCDEF";

	i = va_arg(args, int);
	p = 0;

	while (i > 0)
	{
		i2 = i % 16;
		i = i / 16;

		a[p] = i2;
		p++;
	}

	count = p;
	p--;

	while (p >= 0)
	{
		c = values[a[p]];

		_putchar(c);

		p--;
	}
	return (count);
}
