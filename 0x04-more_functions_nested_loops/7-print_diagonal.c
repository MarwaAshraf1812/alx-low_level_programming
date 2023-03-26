#include "main.h"
/**
 *print_diagonal - prints a line n chars long.
 *@n: number of \.
 *
 *Return: void.
 */
void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
