#include "main.h"
/**
 * print_sign - print sign
 * @n: number of the sign printed
* Return: 1 if no is more
 * 0 of numbwr zero
 * -1 is less dan zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
