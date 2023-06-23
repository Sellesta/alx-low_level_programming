#include "main.h"

/**
 * _isupper - Function entry
 * Description: A function that checks for uppercase character
 * @c: the variable that holds the value to check
 * Return: Returns 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
