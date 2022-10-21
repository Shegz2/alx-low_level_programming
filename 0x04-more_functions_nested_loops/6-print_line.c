#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of '-' to print
 * Return: Alway return zero
 */
void print_line(int n)
{
	int len;

	if (n <=  0)
		_putchar('\n');
	for (len = 1; len <= n; len++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
