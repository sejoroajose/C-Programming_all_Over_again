#include <stdio.h>

/**
 * print_alphabet_x10 - prints all alphabets 10 times
 *
 * Return - Always (0)
 */

void print_alphabet_x10(void)
{
	int i = 1;
	char j;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		};
		i++;
		putchar('\n');
	}
}
