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

long int n, i;
	char *s;

	n = va_arg(ap, unsigned int);
	s = _itoa(n, 16);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		_putchar(s[i]);
	}
	return (i);
}
