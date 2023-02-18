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
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	printf("The last digit of the number %d is %d \n", n, m);
	return (0);
}

