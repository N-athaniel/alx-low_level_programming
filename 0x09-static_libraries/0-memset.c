#include "main.h"

/**
 * _memset - projram fills a blook of memory with a specific value
 * @s: strating address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[n] = b;
		n--;
	}
	return (s);
}
