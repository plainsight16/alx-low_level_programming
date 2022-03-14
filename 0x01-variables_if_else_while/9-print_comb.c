#include <stdio.h>
/**
	* main - Entry point
	* Description: print single digit numbers in base 10 seprated with a comma and space
	* Return: 0
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num++ + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
