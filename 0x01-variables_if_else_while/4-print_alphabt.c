#include <stdio.h>
/**
 * main - Entrypoint
 */
int main(void)
{
	char alph = 'a';

	while ((alph != 'e') && (alph != 'q') && (alph <= 'z'))
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
