#include "main.h"
/*
 * more_numbers - prints 10 times the number 1   to 14
 * Return: Always 0
 */
void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');

}
