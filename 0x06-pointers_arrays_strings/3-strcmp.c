#include "main.h"
/**
 * _strcmp - function that compar
 * @si: inpits
 * @s2: inputs
 * Return: Always return 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
