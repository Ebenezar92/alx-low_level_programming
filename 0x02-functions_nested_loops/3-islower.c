#include "main.h"

/**
 * _islower - function to check for lower characters
 * @c: is the int that we will use for argument of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
