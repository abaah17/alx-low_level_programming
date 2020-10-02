#include "holberton.h"
/**
 * _strcmp - compares strings
 * @s1: first pointer parameter
 * @s2: second pointer parameter
 *
 * Description: if strings are equal return 0
 * Return: Always(0) Success
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
