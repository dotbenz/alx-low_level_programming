#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer in the array
 * @max: maximum integer to an array
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int i, size;
	int *p;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(sizeof(*p) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
	{
		*(p + i) = min;
	}
	return (p);
}
