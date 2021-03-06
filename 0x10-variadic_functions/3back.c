#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * op_char - prints an string
 * @arg: the integer to print
 * Return: void.
 */
void op_char(va_list arg)
{
	int c;

	c = va_arg(arg, int);
	printf("%d", c);
}
/**
 * op_int - prints an string
 * @arg: the integer to print
 * Return: void.
 */
void op_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}
/**
 * op_string - prints an string
 * @arg: the integer to print
 * Return: void.
 */
void op_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char*);
	printf("%s", s);
}
/**
 * print_all - prints an string
 * @arg: the integer to print
 * Return: void.
 */
void op_float(va_list arg)
{
	double f;

	f = va_arg(arg, double);
	printf("%f", f);
}
/**
 * print_all - prints an string
 * @arg: the integer to print
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0, j;

	op_t ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_string},
		{NULL, NULL}
	};
	va_start (arg, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		if (format[i + 1] && format[i] == '%' &&
		    (format[i + 1] == 'c' ||
		     format[i + 1] == 'i' ||
		     format[i + 1] == 'f' ||
		     format[i + 1] == 's' ))
			while (ops[j].format != NULL)
			{
				if (*(ops[j].format) == format[i + 1])
				{
					ops[j].tu(arg);
					break;
				}
				j++;
			}
		i++;
	}
	printf("\n");
	va_end(arg);
}
