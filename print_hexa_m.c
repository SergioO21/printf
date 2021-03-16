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

long int i2, i;
	char *s;

	i = va_arg(args, unsigned int);
	s = _itoa(i, 16);

	for (i2 = 0; s[i2] != '\0'; i2++)
	{
		if (s[i2] >= 97 && s[i2] <= 122)
		{
			s[i2] = s[i2] - 32;
		}
		_putchar(s[i2]);
	}
	return (i2);
}
