#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * The program assigns a random number to the variable n
 * each time it is executed.
*/
/*betty style doc for function main goes here*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)

	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
