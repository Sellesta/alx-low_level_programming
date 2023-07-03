#include "main.h"

/**
* _strchr - locates a character in a string.
* @s: String to be searched.
* @c: Character to be located.
* Return: If c is found - a pointer to the first occurence.
*         If c is not found - NULL.
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
