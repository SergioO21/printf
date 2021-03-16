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
	unsigned int s, count;
	int i = 0;
	unsigned int valor[100];

	s = va_arg(args, int);

	if (s == 0)
		_putchar(i + '0');

	while (s > 0)
	{
		valor[i] = s % 8;
			s = s / 8;
		i++;
	}

	count = i;
	i = i - 1;

	while (i >= 0)
	{
		char c = valor[i] + '0';

		_putchar(c);

		i--;
	}
	return (count);
}
