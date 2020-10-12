#include "holberton.h"
/**
 * _strncat - concatenate two strings
 * @dest : The pointer destination
 * @src : The pointer source
 * @n  : the pointer n byte
 * Return: concatenate string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *append = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while ((*src != '\0') && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (append);
}
