#include "holberton.h"

/**
 * print_char - Print a char.
 *
 * @args: List of arguments.
 *
 * Return: The number of characters printed.
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);

	_putchar(c);

	return (1);
}
