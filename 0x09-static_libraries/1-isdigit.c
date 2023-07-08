#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Entry point
 * Description - function that checks for a digit (0 through 9)
 * *@c: the function accepts an input saved into c
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	int  number = isdigit(c);

	if (number != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
