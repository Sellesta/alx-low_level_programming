#include "main.h"

/**
 * print_numbers - Function entry
 * Description: A function that prints the numbers,
 * ...from 0 to 9, followed by a new line
 * Return: nothing is bliss!
 */
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}

	_putchar('\n');
}
