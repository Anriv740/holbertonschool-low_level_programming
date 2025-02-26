#include <stdio.h>

/**
 * main - print alphabet in lower case except q and e
 * Return: Always: (0)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			alphabet++;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

