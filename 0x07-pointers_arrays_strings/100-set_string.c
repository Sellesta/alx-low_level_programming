#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char.
 * @s: The pointer.
 * @to: The char.
 * Return: void.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
