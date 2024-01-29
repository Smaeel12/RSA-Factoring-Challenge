#include "main.h"

/**
 * factorizer - The function to factorize a given number
 * @line: string from the file
 */
void factorizer(const char *line)
{
	unsigned long long n, p, q;

	n = strtoull(line, NULL, 10);
	for (q = 2; q < n; q++)
	{
		if (n % q == 0)
		{
			p = n / q;
			printf("%lld=%lld*%lld\n", n, p, q);
			break;
		}
	}
}
