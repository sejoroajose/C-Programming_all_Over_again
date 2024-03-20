#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the multiplication table up to n
 * @n: The upper limit of the multiplication table
 */

void print_times_table(int n)
{
    int i, j, result;

    if (n > 15 || n < 0)
    {
        _putchar(' ');
    }
    else
    {
        for (i = 0 ; i <= n; i++)
        {
            for (j = 0 ; j <= n; j++)
	    {
                result = i * j;
                if (result < 10)
                {
                    _putchar(result + '0');
                }
                else
                {
                    _putchar(result / 10 + '0');
                    _putchar(result % 10 + '0');
                }
                if (j != n)
		{
                    _putchar(',');
                    _putchar(' ');
                }
            }
            _putchar('\n');
        }
        _putchar('\n');
    }
}
