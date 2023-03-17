#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n=rand()-RAND_MAX/2;
	/*your code goes here*/
	if(0>n)
	{
		printf("%d is positive\n",n)
	}
	if(0<n)
	{
		printf("%d is negative\n",n)
	}
	if(0==n)
	{
		printf("%d is zero\n",n)
	}
return(0)
}
