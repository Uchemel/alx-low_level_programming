#include <stdio.h>
/**
 * main - print alphabets in lower case a-z
 *
 * Return: Always(0)
 *
 */
int main(void)
{
	char alp[26] = "abcd..z";
	int i;

	for (i = 0; i < 6; i++)
	{
		putchar (alp[i]);
	}
	putchar('\n');
	return (0);
}
