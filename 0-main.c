#include "main.h"
/**
 * main - Entry point
 * @ac: Arg counter
 * @av: Arg vector
 * Return: Always 0
 */
int main(int ac, char **av)
{
	FILE *fd;
	char *line;
	int *factors;
	unsigned long long fnum;

	if (ac != 2)
	{
		write(STDERR_FILENO, "Usage: factors <file>\n", 20);
		return (-1);
	}
	fd = fopen(av[1], "r");
	if (fd == NULL)
	{
		write(STDERR_FILENO, "File can't be opened\n", 20);
		return (-1);
	}
	line = malloc(25 * sizeof(char));
	if (line == NULL)
	{
		write(STDERR_FILENO, "malloc failed\n", 20);
		return (-1);
	}
	while (fgets(line, 25, fd) != NULL)
	{
		factorizer(line);
	}
	free(line);
	fclose(fd);
	return (0);
}
