#include <stdio.h>
#include <stdlib.h>

/**
 * fizz_buzz- prints "Fizz" for the multiples of 3
 * and "Buzz for the multiples of 5
 *
 * Return: Always (0);
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		};
		printf(" ");
	}
	printf("\n");
	return (0);
}
