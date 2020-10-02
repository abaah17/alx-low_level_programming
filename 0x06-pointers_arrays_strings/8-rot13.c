#include "holberton.h"
/**
 * rot13 - encode a string
 * @str: first pointer parameter *
 * Description: encoded in rot13
 * Return: Always(0) Success
 */
char *rot13(char *str)
{
	int i = 0;
	int k;

	char alphabet[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 51; k++)
		{
			if (alphabet[k] == str[i])
				str[i] = s1[k];
		}
	}
	return (str);
}
