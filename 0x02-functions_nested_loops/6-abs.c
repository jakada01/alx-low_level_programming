#include "main.h"
/**
 * _abs - function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int c)
{
if (c > 0 || c == 0)
{
return (c);
}
else
return (c * -1);
}
