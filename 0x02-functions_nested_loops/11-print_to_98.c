#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from a given number to 98
 * int(n): given number where counting starts
 *
 * Return: numbers from n to 98
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 10)
		{
			_putchar(i + '0');
		}
		else
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
