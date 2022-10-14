#include <stdio.h>
/**
 * main - size of types
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %ibytes(s)\n", sizeof(char));
	printf("Size of an int: %ibytes(s)\n", sizeof(int));
	printf("Size of a long int: %ibytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %ibytes(s)\n", sizeof(long long int));
	printf("Size of a float: %ibytes(s)\n", sizeof(float));
	return (0);
}
