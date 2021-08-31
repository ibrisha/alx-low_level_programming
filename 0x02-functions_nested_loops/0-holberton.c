#include "main.h"
/**
 *holberton - prints the string "Holberton" from char array
 *Return:0 on success
 */
int main(void)
{
	char ch[] = "Holberton";
	int i;
	
	for(i = 0;i < 9;i++)
        {
		_putchar(ch[i]);

	}
	_putchar('\n');
	return (0);

}
