#include "main.h"

/**
 * _isdigit - checks if the input
 * is a digit or not
 * @c: character to check
 *
 * Return: returns 1 if digit
 * returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
