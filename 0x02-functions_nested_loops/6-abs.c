#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computesthe absolute value of an integer
 * @c: is the int that we will be used to compute the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
