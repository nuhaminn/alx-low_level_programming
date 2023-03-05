#include <stdio.h>

/**
 * main - causes an infinite loop
 * main - causes an infinite loop
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	putchar(i);

	return (0);
}
