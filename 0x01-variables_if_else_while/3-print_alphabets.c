#include <stdlib.h>
#include <stdio.h>

/**
 * main - print 26 caracteres of alphabet lowercase and uppercase
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
        {
                putchar(alphabet);
        }

	putchar('\n');
	return (0);
}
