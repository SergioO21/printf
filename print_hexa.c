#include "holberton.h"

/**
 * print_hexa - Print an unsigned integer as a hexadecimal number.
 *
 * @args: List of arguments.
 *
 * Return: The number of characters printed.
 */

int print_hexa(va_list args)
{

long int i2, i;
	char *s;

	i = va_arg(args, unsigned int);
	s = _itoa(i, 16);

	for (i2 = 0; s[i2] != '\0'; i2++)
	{
		_putchar(s[i2]);
	}
	return (i2);

}
