#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */

int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
	putchar(a + '0');
	a++;
	}
	putchar('\n');
	return (0);
}
