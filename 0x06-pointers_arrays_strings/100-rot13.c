#include "main.h"

/**
* rot13 - ok
* @str: oka
*
* Return: str
*/

char *rot13(char *str)
{
	int i = 0;
	int f;

	while (str[i] != 0)
	{
		f = 0;
		while (((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] <
							 123)) && (f < 1))
		{
			str[i] -= 13;
			if ((str[i] < 65 && str[i] > 51) || (str[i] > 83 && str[i]
							    < 97))
			{
				str[i] += 26;
			}
			f = 3;
		}
		i++;
	}
	return (str);
}
