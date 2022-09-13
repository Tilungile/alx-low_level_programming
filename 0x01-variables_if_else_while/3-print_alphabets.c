#include <stdio.h>

/**
 * main - Entry point
 * Description: 'lowercase and uppercase then newline'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'a';
	char ALPH = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		ALPH++;
	}
	putchar('\n');
	return (0);
}
