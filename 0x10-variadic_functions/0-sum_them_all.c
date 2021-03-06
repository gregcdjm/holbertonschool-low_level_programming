#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints an integer
 * @n: the integer to print
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int h = 0, i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n ; i++)
		h += (int) va_arg(args, int);
	va_end(args);
	return (h);
}
