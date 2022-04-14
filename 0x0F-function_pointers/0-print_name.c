#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to function with string to obtain
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || (*f) == NULL)
		exit(98);

	(*f)(name);
}
