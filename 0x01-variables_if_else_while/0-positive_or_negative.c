#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Check if the number sored in the variable n is positive, negative or zero. 
 *
 * return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("%d \n", n);

	/* Our code will go here */
	if (n < 0)
	{
		printf ("The number is negative \n");
	}
	else if (n > 0) 
	{
		printf ("The number is positive \n");
	}
	else 
	{
		printf ("The number is zero \n");
	}
	return (0);
}
