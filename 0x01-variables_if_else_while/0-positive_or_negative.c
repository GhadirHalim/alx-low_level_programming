#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * description: determine if random number is positive, negative or zero. 
 *
 * return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* Our code will go here */
	printf("%d \n", n);
	
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n > 0) 
	{
		printf("%i is positive\n", n);
	}
	else 
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
