#include "main.h"
/**
 * argstostr - functoons
 * @ac: inputs
 * @av: inputs
 * Return: Always 0
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int ct, a, b, c;

	ct = a = b = c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			ct++;
			b++;
		}
		a++;
	}
	ct = ct + ac + 1;
	str = malloc(sizeof(char) * ct);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
