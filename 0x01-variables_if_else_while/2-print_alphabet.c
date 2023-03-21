#include <stdio.h>

/**
 * main - print lowercase letters
 *
 * Return: Always 0.
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	putchar('\n');
}

