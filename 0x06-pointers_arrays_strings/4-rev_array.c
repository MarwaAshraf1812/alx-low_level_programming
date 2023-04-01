#include "main.h"
/**
 *reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int cmp, rev;

	n = n - 1;
	cmp = 0;
	while (cmp <= n)
		cmp = a[rev];
		a[rev++] = a[n];
		a[n--] = cmp;
}
