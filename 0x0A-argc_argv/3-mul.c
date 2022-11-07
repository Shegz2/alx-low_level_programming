#include <stdio.h>
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
	int i;
	int b;

	if (argc == 3)
	{
		i = atoi(argv[2]);
		b = atoi(argv[1]);
		printf("%d\n", i * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
