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
	int i, i2, p, count;
	char n[100];
	char c;

	i = va_arg(args, int);
	p = 0;
	count = 0;

	if (i < 0)
	{
		i = i * -1;
		c = '-';

		_putchar(c);
		count++;
	}

	while (i > 0)
	{
		i2 = i % 10;
		i = i / 10;

		n[p] = i2;
		p++;
	}

	p--;
	count += p + 1;

	while (p >= 0)
	{
		c = n[p] + '0';

		_putchar(c);

		p--;
	}
	return (count);
}
