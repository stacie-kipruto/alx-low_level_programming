#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;
	
	printf("Size of a char: %lu byte(s)\n", (unsigned)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}
