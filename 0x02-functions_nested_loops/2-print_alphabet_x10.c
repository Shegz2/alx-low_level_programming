#include "main.h"
/**
 * function that prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	char c;
	int times;

	for (times = 0; times <= 9; times++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
