#include <stdio.h>

/**
* main - main
* Return: return
*/
int main(void)
{
int ch = 48;
while (ch < 58)
{
putchar(ch);
if (ch > 47 && ch < 57)
{
putchar(',');
putchar(' ');
}
ch++;
}
putchar('\n');
return (0);
}
