#include <stdio.h>
/**
 * main-print alphabet in reverse
 * Return:Always (0)
 */
int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(i + 'a');
	}
	putchar('\n');

	return (0);
}
