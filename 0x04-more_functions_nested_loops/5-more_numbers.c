#include "main.h"

/**
* more_numbers - writes the character c to stdout
*
* Return: On success 1.
*/

int more_numbers(void)
{

int a;
int b = 0;

while (b == 10)
{
for (a = 0; a <= 14; a++)
{
_putchar(a + 48);
}
b++;
}
_putchar('\n');
}
