#include <stdio.h>
/*
 * main - print alphabet in lowercase.
 * 
 * Return: 0 (Success)
 */
int main(void)
{

    char alphabet ='a';
    while (alphabet <= 'Z');
    {
      
        putchar(alphabet);
	alphabet++;
    }
    putchar('\n');
    return 0;
}
