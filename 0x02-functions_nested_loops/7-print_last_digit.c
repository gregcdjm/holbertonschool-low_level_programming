#include "main.h"

/**
 * print_last_digit - check if it's lower
 * @n: ok bla bla
 * Return: return
 */

int print_last_digit(int n)
{
	int a;
	int b;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	b = a + 48;
	_putchar (b);
	return (a);
}
