#include "main.h"
/**
 * _strcpy - function that copies the string pointed
 * @dest: inpits
 * @src: inputd
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (*(src + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;
	}
	*(dest + l) = '\0';
	return (dest);


}
