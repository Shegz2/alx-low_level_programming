#include "main.h"
/*
 * more_numbers - prints 10 times the number 1   to 14
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; i < 15; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');

}
