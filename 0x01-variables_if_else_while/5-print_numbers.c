#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (int a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
