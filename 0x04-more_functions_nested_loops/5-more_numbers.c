#include "main.h"
/**
 *more_numbers - prints 0 - 14.
 *
 *Return: void.
 */
void more_numbers(void)
{
	int i, j, p;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; <= 14; j++)
		{
			i = p;
			if (p > 9)
			{
				_putchar(1 + 48);
				i = p % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
