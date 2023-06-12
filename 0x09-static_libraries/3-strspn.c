#include "main.h"

/**
 * _strspn - program entry point
 * @s: input
 * @accept: input
 * Return: Always 0 success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int t;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[t])
			{
				n++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (n);
		}
		t++;
	}
	return (n);
}
