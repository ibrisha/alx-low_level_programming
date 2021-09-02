#include "main.h"
/**
 *print_square - draw square.
 *@size:length of square.
 *Return:Nothing
 */
void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
