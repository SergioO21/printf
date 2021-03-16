#include "holberton.h"

/**
 * _printf - Print according to a format.
 *
 * @format: Arguments.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i, j;
	int count = 0;
	char c;

	type specifiers[] = {
		{"c", print_char}, {"s", print_string},
		{"d", print_int}, {"%", print_percent},
		{"i", print_int}, {"b", print_binary},
		{"o", print_octal}, {"x", print_hexa},
		{"X", print_hexa_m}, {"u", print_uint},
		{"r", print_rev}, {"R", print_rot13},
		{NULL, NULL}
	};

	va_start(args, format);

	if (!format)
		return (-1);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
				return (-1);

		if (format[i] == '%' && format[i + 1] == ' ')
				i++;

		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			for (j = 0; specifiers[j].op != NULL; j++)
			{
				if (format[i] == specifiers[j].op[0])
					count += specifiers[j].f(args);
			}
		}

		else
		{
			c = format[i];
			write(STDOUT, &c, 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}
