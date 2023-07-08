#include "main.h"
/**
* _strncpy - Entry point
* Description - A function that copies a string
* as parameter and updates the value it points to to 98
* *@dest: the function accepts an input saved into dest
* *@src: the function accepts an input saved into src
* *@n: the function accepts an input saved into n
* Return: Nothing for now
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
