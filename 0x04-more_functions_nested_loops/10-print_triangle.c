#include "main.h"
/**
 *print_triangle - prints a triangle of size size.
 *@size: size of triangle.
 *
 *Return: void.
 */
void print_triangle(int size)
{
	int i, j, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (p = 1; p <= (size - i); p++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
