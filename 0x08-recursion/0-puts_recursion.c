#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: string
 */
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	if (*s++)
		_putchar(*(s - 1)), _puts_recursion(s);
}
