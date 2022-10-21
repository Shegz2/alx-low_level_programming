#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100 But for multiples of three
 * print Fizz instead of the numbe
 * Return: Always 0
 */
int main(void)
{
	int y;

	for (y = 2; y <= 100; y++)
	{
		printf(" ");
		if (y % 3 == 0)
			printf("Fizz");
		if (y % 5 == 0)
			printf("Buzz");
		if ((y % 3 && y % 5 == 0))
			printf("FizzBuzz");
		if ((y % 3 && y % 5 != 0))
		printf("%d", y);
	}
	printf("\n");
	return (0);

}
