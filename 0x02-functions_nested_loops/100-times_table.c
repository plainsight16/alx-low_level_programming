#include "main.h"
/**
  * print_times_table - print n times table starting with 0
  * @n: range of time-table
*/
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	int i = 0;
	int j;

	while (i <= n)
	{
		j = 0;

		while (j <= n)
		{
			_putchar((i * j) + '0');
			if (j < n)
			{
				_putchar(',');
				if ((i * j) >= 0 && (i * j) <= 9)
				{
					_putchar('   ');
				}
				else
				{
					_putchar('  ');
				}
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
