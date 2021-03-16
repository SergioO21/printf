#include "holberton.h"

/**
 * print - Print according to a format.
 *
 * @format: Arguments.
 *
 * @args: list of arguments.
 *
 * @specifiers: struct type.
 *
 * Return: The number of characters printed.
 */


int print(const char *format, va_list args, type specifiers[])
{
	int i = 0, j = 0, count = 0;

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == ' ')
				i++;

			while (j < 13)
			{
				if (format[i + 1] == specifiers[j].op[0])
				{
					count += specifiers[j].f(args);
					i++;
					break;
				}
				if (j == 9 && format[i + 1] != specifiers[j].op[1])
				{
					if (!format[i + 1])
						return (-1);

					else
						count += _putchar(format[i]);
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
		j = 0;
	}
	return (count);
}
