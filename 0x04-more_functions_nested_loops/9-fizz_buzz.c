#include < stdio.h >
/**
 * fizz_buzz - prints numbers from 1-100.
 *if number is multiple of 3 it prints Fizz.
 **if number is multiple of 5 it prints Buzz.
 * Return: Nothing.
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf('\n');
}
