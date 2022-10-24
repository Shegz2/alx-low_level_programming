#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: the swap int
 * @b: the swap int
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;

}
