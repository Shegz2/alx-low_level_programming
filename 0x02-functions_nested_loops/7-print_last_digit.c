#include "main.h"
/**
 * print_last_digit - print
 * @t: the number
 * Return: value of the last digi
 */
int print_last_digit(int t)
{
	int l = t % 10;

	if (l < 0)
		l *= -1;
	_putchar(l + '0');
	return (0);
}
