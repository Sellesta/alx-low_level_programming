#include "main.h"

/**
 * print_line - Function entry
 * Description: A function that draws a straight line in the terminal
 * @n: Variable name to hold the value
 * Return: nothing is bliss!
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
