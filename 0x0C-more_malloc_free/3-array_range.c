#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *array;
	int i, array_size;

	if (min > max)
		return (NULL);

	array_size = (max - min) + 1;

	array = malloc(sizeof(int) * array_size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < array_size; i++)
	{
		array[i] = min;
		min = min + 1;
	}

	return (array);
}
