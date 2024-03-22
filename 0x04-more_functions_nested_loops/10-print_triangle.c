#include "main.h"

/**
 * print_triangle- prints a triangle of '#'
 * @size: size of the triangle
 *
 * Return: Always(0)
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	};

	for (i = 1; i <= size; i++)
	{
		for (j = i; j >= 1; j--)
		{
			_putchar('#');
		};
		_putchar('\n');
	};
	_putchar('\n');
}
