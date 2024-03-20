#include "main.h"
#include <stdio.h>

/**
 * print_last_digit- prints the last digit of a number
 * i: input variable
 * return: the last digit of the number
 */

int print_last_digit(int i)
{
	int last_digit =  i % 10;

	_putchar(last_digit + '0');
	return (0);
}
