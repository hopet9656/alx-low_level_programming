#include <stdio.h>

/**
 * swap_int - Swaps the values oftwo integers
 * @a: The first interger to be swapped
 * @b: The second interger to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
