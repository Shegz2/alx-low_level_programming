#include<stdio.h>
/**
 * main - print reverse of a to z
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar (c);
		c--;
	}
	putchar ('\n');
	return (0);
}
