#include <std.io>

/**
 * main - print numbers of base 16 in lowercase
 *
 * Return: will return 0 if properly executed
 */
int main(void)
{
	int number;
	char alphabet;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
