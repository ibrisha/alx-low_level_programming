#include "main.h"
/**
 *swap_int - swaps two integers
 *@a:integer value
 *@b:integer value
 *Return:Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
