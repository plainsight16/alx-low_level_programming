#include <stdio.h>
/**
	* main - Entry point
	* Description: prints all possible combinations of 3 digits with commas and a space seperating them
	* Return: 0
*/
int main(void)
{
	int i = 0;
	int j, k;

	while (i < 1000)
	{
		j = (i / 10) % 10; /* Tens */
		k = i % 10; /* Units */

		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');

		if (i < 800)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
