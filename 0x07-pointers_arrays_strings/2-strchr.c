#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: inputs
 * @c: inputs
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int a;
	int b;

	a = 0;

	while (s[a])
		a++;
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
