#include <stdio.h>
/**
	* main- Entry point
	* Description: Print single digit numbers in base 10
	* Return: 0
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf(num++);
	}
	printf("\n");
	return (0);
}
