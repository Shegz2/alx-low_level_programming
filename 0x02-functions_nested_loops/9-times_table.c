#include "main.h"
/**
 * times_table - prints table 9
 */
void times_table(void)
{
	int num, mul, prod;

	for (num = 0; num <= 9; num++)
	{
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mul;
			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');

	}
}
