#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print last digit of variable n
 *
 * Description: using the main function
 * this program prints "The last digit of varaible n
 * Return : 0
 */
int main(void)
{
int n;

int l;
srand(time(0));
n = rand() - RAND_MAX / 2;
	/* your code goes there */
l = n % 10;
if (l > 5)
{
	printf("the last digit is %d and is greater than 5\n", l);
}
else if (l == 0)
{
	printf("the last digit is %d  and is 0\n", l);
}
else
{
	printf("the last digit is %d and is less than 6 and not 0\n", l);
}
return (0);
}
