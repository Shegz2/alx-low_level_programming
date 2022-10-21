#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: the number of \ to be printed
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x <= n; x++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}

