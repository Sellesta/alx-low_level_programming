#include "variadic_functions.h"

/**
 * sum_them_all - function entry
 * Description: A function that returns the sum of all its parameters
 * @n: The count of the arguments
 * Return: sum of all parameters
 * If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
