#include "main.h"

/**
 * more_numbers - Function entry
 * Description: A function that prints 10 times the numbers, from 0 to 14
 * Return: nothing is bliss!
 */
void more_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		int num = 0;

		while (num <= 14)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');

			num++;
		}
		_putchar('\n');

		count++;
	}
}
