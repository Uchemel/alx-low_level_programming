#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- generate the last digit of number stored in the variable
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	int n;
	int lasted;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasted = n % 10;
	if (lasted > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lasted);
	}
	else if (lasted == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lasted);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasted);
	}
	return (0);
}
