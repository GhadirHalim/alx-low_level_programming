#include <stdio.h>
/*
 * main -main block
 * description: alphabet in lc
 *
 * Return: 0
 */
int main (void) 
{
	char f = 'a';

	while (f <= 'z')
	{
		putchar(f);
		f++;
	}
	putchar('\n');
	return (0);
}
