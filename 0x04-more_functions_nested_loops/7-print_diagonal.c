#include "main.h"

/**
 * print_diagonal - Function entry
 * Description: A function that draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 * Return: nothing is bliss!
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j = 1;

		while (j <= n)
		{
			int k = 1;

			while (k < j)
			{
				_putchar(' ');
				k++;
			}
			_putchar('\\');
			_putchar('\n');

			j++;
		}
	}
}
