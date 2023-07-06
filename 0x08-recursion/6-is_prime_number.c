#include "main.h"

/**
 * prime_check - checks to see if number is prime.
 * @chk: check.
 * @p: possible prime number.
 * Return: 1 if prime, 0 if not.
*/

int prime_check(int chk, int p)
{
if (p < 2 || p % chk == 0)
return (0);
else if (chk > p / 2)
return (1);
else
return (prime_check(chk + 1, p));
}

/**
 * is_prime_number - Determine if number is prime
 * @n: number to check
 * Return: 1 if n is  prime, else 0.
*/

int is_prime_number(int n)
{
if (n == 2)
return (1);
return (prime_check(2, n));
}
