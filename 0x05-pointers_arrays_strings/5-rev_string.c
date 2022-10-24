#include "main.h"
/**
 * rev_string - function reverse
 * @s: reverse string
 * Return: always zero
 */
void rev_string(char *s)
{
	char rv = s[0];
	int b = 0;
	int i;

	while (s[b] != '\0')
		  b++;
	for (i = 0; i < b; i++)
	{
		b--;
		rv = s[i];
		s[i] = s[b];
		s[b] = rv;
	}


}
