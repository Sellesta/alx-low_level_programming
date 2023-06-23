#include "main.h"

/**
 * _isdigit - Function entry
 * Description: A function that checks for a digit (0 through 9)
 * @c: the variable that holds the value to check
 * Return: Returns 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
