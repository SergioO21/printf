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
	_putchar(va_arg(args, int));

	return (1);
}
