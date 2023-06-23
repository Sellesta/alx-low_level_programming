#include "main.h"

/**
 * print_triangle - Function entry
 * Description: A function that prints a triangle
 * Using the character #
 * @size: size is the size of the triangle
 * Return: nothing is bliss!
*/
void print_triangle(int size)
{
	int height, width, character_count;

	if (size <= 0)
		_putchar('\n');
	else
	{
		height = 1;

		while (height <= size)
		{
			width = 1;

			while (width <= (size - height))
			{
				_putchar(' ');
				width++;
			}

			character_count = 1;

			while (character_count <= height)
			{
				_putchar('#');
				character_count++;
			}

			height++;

			_putchar('\n');
		}
	}
}
