#include "main.h"

/**
 * print_most_numbers - Function entry
 * Description: A function that prints the numbers, from 0 to 9
 * Do not print 2 and 4
 * Return: nothing is bliss!
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');

		num++;
	}

	_putchar('\n');
}
