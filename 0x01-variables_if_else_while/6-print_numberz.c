#include <stdlib.h>
#include <stdio.h>

/**
 * main - print numbers from 0 to 10
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number;

	for (number = 0; number < 10; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
