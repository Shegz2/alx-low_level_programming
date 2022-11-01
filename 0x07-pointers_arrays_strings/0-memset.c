#include "main.h"
/**
<<<<<<< HEAD
 * _memset - function that fills memory with a constant byte
 * @s: inputs
 * @b: inputs
 * @n: inputs
 * Return: Always 0
=======
 * _memset - function that fills memory with a constant byte.
 * @s: inputs
 * @b: inputs
 * @n: inputs
 * Return:Always 0
>>>>>>> aa3fdb3c74f8e84794010d8243f2fe2a6c3143a4
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
