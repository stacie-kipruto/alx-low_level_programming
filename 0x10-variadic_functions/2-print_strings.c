#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a newline
 * @separator: string to be printed between the strings
 * @n: number of strings passed to function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *value;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, char*);

		if (value == NULL)
			value = "(nil)";
		if (separator == NULL)
			separator = "";

		if (i == n - 1)
			printf("%s\n", value);
		else
			printf("%s%s", value, separator);
	}

	va_end(args);
}
