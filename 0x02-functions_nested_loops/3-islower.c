#include "main.h"
/**
 * _islower - check character
 * @c: The character to print
 * Return: 1 if the character is lower and 0 if not .
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
