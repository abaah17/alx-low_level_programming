#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: returns NULL on error
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	array = (int **) malloc(height * sizeof(int *));

	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	}
	if (array != NULL)
	{
		return (array);
	}
	return (NULL);
}
