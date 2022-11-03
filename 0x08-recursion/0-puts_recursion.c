#include "main.h"
/**
 * _puts_recursion - function
 * @s: inpits
 * Return: Always return 0
 */
void _puts_recursion(char *s)
{
	int a = 0;

	while (s[a])
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
