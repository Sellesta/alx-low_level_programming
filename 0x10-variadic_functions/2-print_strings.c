#include "variadic_functions.h"

/**
 * print_strings - function entry
 * Description: A function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 * Return: see nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
		{
			printf("%s", s);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
