#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	printf("Value of 'n' is: %p\n", n)
	printf("Address of 'n' is: %p\n", n)
	*n = 98;	
}


int main(void)
{
	int n;
	int *p;

	n = 402;
       	p = &n;

	printf("The value of 'n' is: %d\n", n);
	printf("The address of 'n' is: %p\n", &n);
	printf("The value of 'p' is: %p\n", p);
	
	reset_to_98(p);
	printf("The new value of 'n' is: %d\n", n);

	return (0);
}	
