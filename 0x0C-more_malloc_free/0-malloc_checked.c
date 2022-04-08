#include <stdlib.h>
#include "main.h"

/**
 *  *malloc_checked - allocates memory using malloc
 *  @b: integer
 *  Return: pointer to the array initialized or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);

	if (k == NULL)
		exit(98);

	return (k);
}
