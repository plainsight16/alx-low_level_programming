#include "main.h"
/**
  * print_times_table - print n times table starting with 0
  * @n: range of time-table
*/
void print_times_table(int n)
{
	int i, j, k;

	i = 0;
	if (n > 15 || n < 0)
		return;

	while (i <= n)
	{
		j = 0;

		while (j <= n)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar(k + '0');
				j++;
				continue;
			}
			else if (k >= 0 && k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10 && k < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');	
			}
			else if (k >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((k / 100) + '0');
				_putchar(((k / 10) % 10) + '0');
				_putchar((k % 10) + '0');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
