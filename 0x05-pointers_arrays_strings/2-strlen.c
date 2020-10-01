#include "holberton.h"
/**
 * _strlen - return the length of a string
 * @s : The pointer parameter
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	char *str;
	int len = 0, i = 0;

	str = s;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
