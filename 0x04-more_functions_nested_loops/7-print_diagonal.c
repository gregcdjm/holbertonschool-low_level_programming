#include "main.h"

/**
* print_diagonal - writes the character c to stdout
* @n: vava
* Return: On success 1.
*/

void print_diagonal(int n)
{
if (n > 0)
{
for (n = n; n > 0; n--)
{
_putchar(' ');
}
_putchar('\\');
}
_putchar('\n');
}
