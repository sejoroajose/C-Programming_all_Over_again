#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char i = 'a';

	while (i < 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
