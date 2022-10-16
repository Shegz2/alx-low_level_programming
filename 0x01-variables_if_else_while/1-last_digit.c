#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print gtater than five
 * Return: Always 0
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("last digitof %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("last digitof %d is %d and is 0\n", n, m);

	if (m < 6 && m != 0)
		printf("last digitof %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
