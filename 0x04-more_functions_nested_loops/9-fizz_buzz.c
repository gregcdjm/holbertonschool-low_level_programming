#include <stdio.h>

/**
* main - writes the character c to stdout
* Return: On success 1.
*/

int main(void)
{
int A = 0;

while (A < 99)
{
A++;
if (A % (15) == 0)
printf("FizzBuzz ");
else if ((A / 10 + A % 10) % 3 == 0)
printf("Fizz ");
else if ((A % 10 == 5) || (A % 10 == 0))
printf("Buzz ");
else
printf("%d ", A);
}
printf("Buzz\n");
return (0);
}
