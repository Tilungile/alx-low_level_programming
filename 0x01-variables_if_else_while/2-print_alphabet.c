#include <stdio.h>

/*
 * main - Entry point
 * Description: 'printing all alphabets in lowercase'
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
