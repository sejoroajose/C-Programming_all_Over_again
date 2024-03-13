#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int n, last_digit;

	srand(time(0));
        n = rand() - RAND_MAX / 2;
	last_digit = abs(n) % 10;

	printf ("Last digit of %d", n);

	if (last_digit > 5)
	{
		printf("is %d and is greater than 5\n", last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("is %d and is less than 6 and not 0\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("is %d and is 0\n", last_digit);
	}
	return (0);
}
