#include "lists.h"

/**
 * _putchar - Function Name
 * @ch: The input character to print
 * Description: We create a program print a character to standard output
 *
 * Return: The provided character or an EOF error
 */
int _putchar(int ch)
{
	return (write(1, &ch, 1));
}
