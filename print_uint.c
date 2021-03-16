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
	unsigned int i, count;
	int p, i2;
	char n[100];
	char c;

	i2 = va_arg(args, int);
	p = 0;

	if (i2 < 0)
	{
		i = UINT_MAX + i2 + 1;
	}

	else
		i = i2;

	while (i > 0)
	{
		i2 = i % 10;
		i = i / 10;

		n[p] = i2;
		p++;
	}

	p--;
	count = p + 1;

	while (p >= 0)
	{
		c = n[p] + '0';

		_putchar(c);

		p--;
	}
	return (count);
}
