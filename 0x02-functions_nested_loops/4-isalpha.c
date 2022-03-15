#include "main.h"

/**
 * _isalpha - checks for alphabetic characters.
 *
 * @c: char type letter
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 123) || (c >= 65 && c <= 91));
}
