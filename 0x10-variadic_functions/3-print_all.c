#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - Function entry
 * Description: A function that prints anything
 * @format: a list of types of arguments passed to the function
 * @...: list of arguments
 * Return: See nothing!
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *sep = "";
	va_list args;

	converter toCheck[] = {
		{"s", _printString},
		{"i", _printInt},
		{"f", _printFloat},
		{"c", _printChar},
	};

	va_start(args, format);

	while (format != NULL && format[i / 4] != '\0')
	{
		unsigned int j = i % 4;

		if ((*(toCheck + j)).type[0] == format[i / 4])
		{
			printf("%s", sep);
			toCheck[j].func(args);
			sep = ", ";
		}
		i++;
	}
	putchar('\n');

	va_end(args);
}


/**
 * _printString - Function entry
 * Description: A function that print the string type
 * @myList: va_list passed to the function
 * Return: See nothing!
 */
void _printString(va_list myList)
{
	char *string = va_arg(myList, char *);

	if (string == NULL)
		string = "(nil)";

	printf("%s", string);
}


/**
 * _printFloat - Function entry
 * Description: A function that print the float type
 * @myList: va_list passed to the function
 * Return: See nothing!
 */
void _printFloat(va_list myList)
{
	printf("%f", va_arg(myList, double));
}

/**
 * _printInt - Function entry
 * Description: A function that print the int type
 * @myList: va_list passed to the function
 * Return: See nothing!
 */
void _printInt(va_list myList)
{
	printf("%d", va_arg(myList, int));
}


/**
 * _printChar - Function entry
 * Description: A function that print the char type
 * @myList: va_list passed to the function
 * Return: See nothing!
 */
void _printChar(va_list myList)
{
	printf("%c", va_arg(myList, int));
}
