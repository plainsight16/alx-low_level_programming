#include "main.h"
/**
  * leet - encodes strings
  * @s: string pointer
  * Return: string pointer
*/
char *leet(char *s)
{
	int i = 0;
	char key[] = {'A', 'E', 'I', 'O', 'U'};
	char values[] = {4, 3, 0, 7, 1};

	while (s[i] != '\0')
	{
		for (int j = 0; j < sizeof(key); j++)
		{
			if (s[i] == key[j] || s[i] == key[j] + 32)
			{
				s[i] = values[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
