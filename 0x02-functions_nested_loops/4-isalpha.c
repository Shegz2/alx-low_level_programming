#include "main.h"
/**
 * _isalpha - check case of lettr
 * @c: character to be check
 * Return: 1 if upper or lower an    0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
