#include "main.h"
/**
 * print_buffer - C function that prints the content of an
 * inputted number of bytes from a buffer
 * prints 10 bytes per line
 * starts with the position of the first byte in hexadecimal (8 chars)
 * starting with '0'
 * each line shows the hexadecimal content (2 char) of the buffer
 * 2 bytes at a time, separated by a space
 * each line shows the content of the buffer
 * prints the byte if is printable; if not, prints '.'.
 * Each line ends with a new line '\n'.
 * if the inputtted byte size is 0 or less, the function only prints a new line.
 * @b: number of bytes
 * @size: size of the byte
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size < 0)
	{
		printf('\n');
		return;
	}

	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		for (j = i; j < i + 9; j += z)
		{
			if (j
