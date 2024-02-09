#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/***
 * binary_search: Function that searches for a value in an array
 * - *array : is a pointer to the first element
 * - size : size of array
 * - value : is the value to search for
 * 
 * Return :  the first index where value is located
*/


int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return (-1);
    }

    int l = 0, h = size - 1;

    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (array[mid] == value)
        {
            return (mid);
        }
        else if (array[mid] < value)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }

    return (-1);
}
