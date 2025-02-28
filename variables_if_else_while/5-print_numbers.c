#include <stdio.h>

/**
 * main - print all numbers from 0 to 10
 * Return: Always: (0)
 */

int main(void)

{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
		if (x < 9)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
