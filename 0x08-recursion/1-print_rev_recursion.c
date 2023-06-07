#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 * Return: nothing on success
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		--s;
		_putchar(*s);
	}
}
