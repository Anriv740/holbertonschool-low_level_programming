#include <stdio.h>
/**
 * main-print all the numbers of base 16 in lowercase
 * Return:Always(0)
 */
int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 10; i < 16; i++)
	{
		putchar(i - 10 + 'a');
	}
	putchar('\n');

		return (0);
}
