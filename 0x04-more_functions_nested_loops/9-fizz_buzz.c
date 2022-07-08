#include <stdio.h>

/**
 * fizz_buzz - prints the numbers from 1 to 100
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	printf("Buzz\n");
	return (0);
}


/**
 * main - main Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	fizz_buzz();

	return (0);
}
