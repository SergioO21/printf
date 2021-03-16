#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

#define STDOUT 1
#define MAX_LEN_INT 10

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_int(va_list args);
int print_binary(va_list args);
int print_octal(va_list args);
int print_hexa(va_list args);
int print_hexa_m(va_list args);
int print_uint(va_list args);
int print_rev(va_list args);
int print_rot13(va_list args);
int _strlen(char *s);
int _putchar(char c);

/**
 * struct type - Function call structure.
 *
 * @op: Option.
 * @f: Function.
 */

typedef struct type
{
	char *op;
	int (*f)(va_list);
} type;

#endif /* Holberton Library */
