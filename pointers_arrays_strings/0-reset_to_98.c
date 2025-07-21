#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - this program resets the value of an int to 98
 *
 * @n: the value of deferencing pointer
 *
 * Return: Always 0
 */
void update_to_98 (int *n)
{
	*n = 98;
}
int main()
{
    int value = 42;
    printf("Before: %d\n", value);
    update_to_98(&value);
    printf("After: %d\n", value);
    return 0;
}

