#include "holberton.h"

/**
 * print_binary - Print an unsigned integer as a binary number.
 *
 * @args:  List of arguments.
 *
 * Return: The number of characters printed.
 */

int print_binary(va_list args)
{
	unsigned int s, count;
	int i = 0;
	int valor[100];

	s = va_arg(args, unsigned int);
	
	if (s <= 0)
	{
		_putchar('0');
		return (1);
	}
	
	while (s > 0)
	{
		valor[i] = s % 2;
		s = s / 2;
		i++;
	}

	count = i;
	i--;

	while (i >= 0)
	{
		if (valor[i] == 0)
			_putchar('0');

		else
			_putchar('1');

		s = (s / 2);
		i--;
	}
	return (count);
}
