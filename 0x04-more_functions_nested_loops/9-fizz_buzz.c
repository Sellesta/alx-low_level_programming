#include <stdio.h>

/**
 * main - Function entry
 * Description: A program that prints the numbers from 1 to 100
 * For multiples of three print Fizz instead of the number
 * For the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: zero is success!
*/
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if ((num % 5 == 0) && (num % 3 == 0))
			printf("FizzBuzz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else
			printf("%d", num);

		if (num < 100)
			printf(" ");

		num++;
	}

	printf("\n");

	return (0);
}
