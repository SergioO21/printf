#include "holberton.h"
/**
*
*
*
*/


int print(const char *format, va_list args, type specifiers[])
{
	int i, j, count;

	i = j = count = 0;

	while (format != NULL && format[i] != 0)
	{
		if (format[i] != '%' && format[i] != 0)
		{
			count += _putchar(format[i]);
		}
		else if (format[i] == '%')
		{
			while (j < 10)
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
					{
						return (-1);
					}
					else
					{
						count += _putchar(format[i]);
					}
				}
				j++;
			}
		}
		i++;
		j = 0;
	}
	return (count);
}
