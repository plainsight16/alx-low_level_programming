#include "main.h"
/**
  * print_line - prints a line whose length is n
  * @n:  length of line
  * Return: prints line if true
*/
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
