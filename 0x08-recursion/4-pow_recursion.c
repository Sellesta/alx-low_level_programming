#include "main.h"

/**
 * _pow_recursion - raise x to power y.
 * @x: number.
 * @y: power to raise to.
 * Return: power of a number, -1 if power less than 0.
*/

int _pow_recursion(int x, int y)
{
int result = x;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
result *= _pow_recursion(x, y - 1);
return (result);
}
