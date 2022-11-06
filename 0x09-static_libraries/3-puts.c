#include "main.h"
/**
 * _puts - function
 * @s: onpits
 * Return: Always 0
 */
void _puts(char *s)
{
	while (*s != 0)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}

