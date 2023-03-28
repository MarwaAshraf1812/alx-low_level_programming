#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: parameter
 * Return: string length
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; n++)
	{
		n++;
	}
	return (n);
}
