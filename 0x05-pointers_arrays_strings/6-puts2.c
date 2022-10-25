#include "main.h"
/**
 * puts2 - function that prints every other character of a string, starting
 * @str: string
 * Return: Alwayay 0
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');

}
