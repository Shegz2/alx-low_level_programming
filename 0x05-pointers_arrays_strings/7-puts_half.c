#include "main.h"
/**
 * puts_half - function pront half string
 * @str: input
 * Return: Always zero
 */
void puts_half(char *str)
{
	int l = 0;

	while (*str != '\0')
	{
		l++;
		str++;
	}
	str -= (l / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');


}
