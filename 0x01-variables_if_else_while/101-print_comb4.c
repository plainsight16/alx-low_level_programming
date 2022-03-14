#include <stdio.h>
/**
	* main - Entry point
	* Description: prints all possible combinations of 3 digits with commas and a space seperating them
	* Return: 0
*/
int main(void)
{
	int i = 0;
	int j, k, l;

	while (i < 1000)
	{
		l = i / 100; /* Hundreds */
		j = (i / 10) % 10; /* Tens */
		k = i % 10; /* Units */

		if (j < k && k < l)
		{
			putchar(l + '0');
			putchar(j + '0');
			putchar(k + '0');
			
			if (i < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
