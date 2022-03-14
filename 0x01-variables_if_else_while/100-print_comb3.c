#include <stdio.h>
/**
	* main - Entry point
	* Description: print all possible combinations of two digits
	* Return: 0
*/
int main(void)
{
	int i = 0;
	int j = i + 1;

	while (i < 9)
	{
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
