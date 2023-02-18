#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - main block
 * description: print the last number.
 * Return: 0 (Success)
 */

int main(void)
{
	int n, lstdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdig = n % 10;

	if (lstdig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstdig);
	}
	
	else if (lstdig < 6 && lstdig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstdig);
	}
	else (lstdig == 0);
	{
		printf("Last digit of %d is %d and is 0\n", n, lstdig);
	}

	return (0);
}
