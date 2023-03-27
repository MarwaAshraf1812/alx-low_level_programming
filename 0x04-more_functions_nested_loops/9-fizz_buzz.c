#include <stdio.h>
/**
 *main - replace multiples of 3 and 5.
 *
 *Return: 0.
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		if (i != 100)
		{
			printf(" ");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
