#include <stdio.h>
/**
	* main - Entry point
	* Description: print numbers in base16 lowercase
	* Return: 0
*/
int main(void)
{
		int num = 0;

		char lower = 'a';
		
		while (num < 10)
		{
			putchar(num++ + '0');
		}
		while (lower < 'g')
		{
			putchar(lower++);
		}
		putchar('\n');
		return (0);
}
