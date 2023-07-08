#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * Description - A function that checks for alphabetic character
 * *@c: the function accepts an input saved into c
 * to confirm if the letter is an alpha
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	int letter = isalpha(c);

	if (letter != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
