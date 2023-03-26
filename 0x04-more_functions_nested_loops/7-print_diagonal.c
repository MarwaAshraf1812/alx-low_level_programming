#include "main.h"
/**
 *print_diagonal - prints a line n chars long.
 *@n: number of \.
 *
 *Return: void.
 */
void print_diagonal(int n)
{
	int i, p;

	for (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (p = 0; p <= i; p++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
