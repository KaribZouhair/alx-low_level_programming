#include <stdio.h>

/**
 * main - printing lowercase letters then upercase ones
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	for (l = 'A'; l <= 'Z'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}