#include "main.h"

/**
* _strstr - locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 * Return: pointer to beginning of needle in haystack
 * or NULL if no match.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
