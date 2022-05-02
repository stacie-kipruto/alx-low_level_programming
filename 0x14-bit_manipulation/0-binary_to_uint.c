#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, dec = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		dec <<= 1;
		if (b[i] == '1')
			dec += 1;
		i++;
	}
	return (dec);
}
