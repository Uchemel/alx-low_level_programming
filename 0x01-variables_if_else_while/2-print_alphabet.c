#include <stdio.h>
/**
 * main - print alphabets in lower case a-z
 *
 * Return: Always(0)
 *
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
