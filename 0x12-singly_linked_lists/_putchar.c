#include "variadic_functions.h"

/**
 * _putchar - function name
 * @ch: The input character to print
 * Description: A program that print a character to standard output
 *
 * Return: The provided character or an EOF error
 */
int _putchar(int ch)
{
	return (write(1, &ch, 1));
}
