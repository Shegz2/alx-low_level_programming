#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function
 * @argc: inputs
 * @argv: inputs
 * Return: Alwy 0
 */
int main(int argc, char *argv[])
{
	int pos, to, ch, aux;

	int coins[] = {25, 10, 5, 2, 1};

	pos = to = ch = aux = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	to = atoi(argv[1]);
	if (to <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[pos] != '\0')
	{
		if (to >= coins[pos])
		{
		aux = (to / coins[pos]);
		ch += aux;
		to -= coins[pos] * aux;
		}
		pos++;
	}
	printf("%d\n", ch);
	return (0);
}
