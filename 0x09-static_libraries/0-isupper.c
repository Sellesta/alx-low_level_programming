#include "main.h"

/**
* _isupper - Checks for uppercase characters.
* @c: Character to be checked.
* Return: Always 0.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
