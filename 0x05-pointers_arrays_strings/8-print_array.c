#include "main.h"
#include <stdio.h>
/**
 * print_array - finction
 * @a: inpit
 * @n: inpit
 * Return: Allwaus 0
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n ; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
