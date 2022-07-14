#include "main.h"

/**
 * read_textfile - reads text file and prints to POSIX stdout
 * @filename: text to read
 * @letters: number of letters to read and print
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, res;
	char *s = malloc(letters * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (0);
	}

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	res = read(fd, s, letters);

	printf("%s", s);
	close(fd);

	free(s);
	return (res);
}
