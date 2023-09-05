#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string followed by a new line to stdout
 *@str: The string to print
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
