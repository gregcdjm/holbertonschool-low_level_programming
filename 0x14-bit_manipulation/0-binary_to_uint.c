#include "main.h"

/**
 * binary_to_uint - binaire to unit
 * @b: chaîne de char
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, mul = 1, sum = 0;

	if (b == NULL)
		return (0);
	for (; b[i]; i++)
		;
	i--;
	for (; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			sum += mul;
		mul *= 2;
	}
	return (sum);
}
