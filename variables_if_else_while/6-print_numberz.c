#include <stdio.h>
/**
 * main-print numbers starting from 10 to 0
 * Return: Always(0)
 */
int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
