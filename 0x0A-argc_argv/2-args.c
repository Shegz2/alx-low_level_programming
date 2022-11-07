#include <stdio.h>

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

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
