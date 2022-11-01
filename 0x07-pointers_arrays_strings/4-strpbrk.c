#include "main.h"
/**
 * _strpbrk - functn  that searches a string for any set of bites
 * @s: inputs
 * @accept: inputs
 * Return: pointer to the burte
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;


	}
	return ('\0');
}
