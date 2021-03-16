#include "holberton.h"

/**
 * print_rot13 - Print a string in ROT13.
 *
 * @args: List of arguments.
 *
 * Return: The number of characters printed.
 */

int print_rot13(va_list args)
{
	char *s = va_arg(args, char*);
	int i, j, count = 0;
	char c;
	char r1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; r1[j] != '\0'; j++)
		{
			if (s[i] == r1[j])
			{
				c = r2[j];

				_putchar(c);
				count++;

				break;
			}
		}

		if (r1[j] == '\0')
		{
			c = s[i];

			_putchar(c);
			count++;
		}
	}
	return (count);
}
