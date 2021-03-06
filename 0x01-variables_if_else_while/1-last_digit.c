#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
	* main - Entry Point
	* Description: Prints last digit of a number
	* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int m;

	m = n % 10;
	printf("Last digit of %i is %i", n, m);
	if (m > 5)
		printf("and is greater than 5\n");
	else if (m < 6 && m > 0)
		printf("and is less than 6 and not 0\n");
	else if (m < 0)
		printf("and is 0\n");
	return (0);
}
