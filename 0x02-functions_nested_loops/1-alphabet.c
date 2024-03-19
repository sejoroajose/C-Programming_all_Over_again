#include <stdio.h>

/**
 * print_alphabet - prints alphabets a to z in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
