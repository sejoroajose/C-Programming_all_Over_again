#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		};
		i++;
	};
	putchar('\n');

	return (0);
}
