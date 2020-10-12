#include "holberton.h"
/**
 * *_strcat - concatenate
 * @dest : The pointer destination
 * @src : The pointer destination
 * Return: concatenate string
 */
char *_strcat(char *dest, char *src);

char *_strcat(char *dest, char *src)
{
	char *append = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (append);
}
