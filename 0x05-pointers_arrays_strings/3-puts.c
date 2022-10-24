#include "main.h"
/**
 * _puts - print syring
 * @str: string value
 * Return: string
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str++);
	}
	_putchar('\n');

}
