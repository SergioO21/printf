#include "holberton.h"

/**
 * print_percent - Print a percent sign.
 *
 * @args: List of arguments.
 *
 * Return: The number of characters printed.
 */

int print_percent(va_list args)
{
	char c;
	(void) args;

	c = '%';

	_putchar(c);

	return (1);
}
