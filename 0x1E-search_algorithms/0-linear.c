#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/***
 * linear_search: Function that searches for a value in an array
 * - *array : is a pointer to the first element
 * - size : size of array
 * - value : is the value to search for
 *
 * Return :  the first index where value is located
*/

	size_t i;

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; array[i] && i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
