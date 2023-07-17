#include "main.h"

/**
 * main - function entry
 * Description: A program that prints the name of the file
 * it was compiled from, followed by a new line
 * Return: 0 as success
 */
int main(void)
{
	int i;
	char *fname = __FILE__;

	for (i = 0; fname[i] != '\0'; i++)
	{
		_putchar(fname[i]);
	}
	_putchar('\n');

	return (0);
}
