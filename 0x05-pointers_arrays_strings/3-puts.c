#include "main.h"
/**
 *_puts - prints string to standard output followed by newline
 *@str:pointer to string
 *Return:Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
