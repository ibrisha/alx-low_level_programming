#include "main.h"
#include <stdio.h>
/**
 *reset_to_98 - resets the value of integer using pointer
 *@n:integer value to resetted
 */
void reset_to_98(int *n)
{
	int *p = &n;

	*p = 98;
}
