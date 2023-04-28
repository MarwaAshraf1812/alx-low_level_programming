#include <stdio.h>

/**
 * main - check the code
 *
 * print_before_main - executes this function before the main() function
 * Return: Always 0.
 */

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
int main(void)
{
	print_before_main();

	return (0);
}
