#include <stdlib.h>
#include <stdio.h>

/**
 * main - print 26 caracteres of alphabet
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet ;
	for (aplhabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar("\n");
	return (0);
}
