#include "main.h"

/**
 * _islower - checks if value is lowercase
 * @c: value to be checked
 *
 * Return: 1 if c is lowercase otherwise return 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
