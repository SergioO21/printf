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
	int i;
	type specifiers[] = {
		{"c", print_char}, {"s", print_string},
		{"d", print_int}, {"%", print_percent},
		{"i", print_int}, {"b", print_binary},
		{"o", print_octal}, {"x", print_hexa},
		{"X", print_hexa_m}, {"u", print_uint},
		{"r", print_rev}, {"R", print_rot13},
		{NULL, NULL}
	};

	i = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	i = print(format, args, specifiers);

	va_end(args);
	return (i);
}
