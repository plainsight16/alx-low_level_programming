#include <stdio.h>
/**
	* main - Entry point
	* Description: print single digit numbers in base 10 using putchar()
	* Return: 0
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((char)num++);
	}
	putchar('\n');
	return (0);
}
