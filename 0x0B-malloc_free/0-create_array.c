#include "main.h"
/**
 * create_array - function
 * @size: inputs
 * @c: input
 * Return: null
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int pos;

	if (size == 0)
		return (NULL);
	buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		pos = 0;
		while (pos < size)
		{
			*(buffer + pos) = c;
			pos++;
		}
		return (buffer);
	}
}
