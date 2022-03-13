#include <stdio.h>
/**
	* main - Entry point
	* Description: prints lowercase and uppercase alphabets
	* Return: 0
*/
int main(void)
{
	char upper = 'A';
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
