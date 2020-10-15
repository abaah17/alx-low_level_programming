#include <stdlib.h>
#include "holberton.h"
/**
 *_calloc -allocates memory for an array
 *@nmemb: number of element in the array
 *@size: bytes for each index
 *Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *index;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	index = malloc(nmemb * size);

	if (index == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
	{
		index[x] = 0;
	}
	return (index);
}
