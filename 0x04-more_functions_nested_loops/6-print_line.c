#include "main.h"

/**
 * print_line- prints '_' n times
 * @n: input integer 
 *
 * Return: Always (0)
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
