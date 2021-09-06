#include "main.h"
/**
 *_strlen - counts number of characters of string
 *@s:pointer to string to be counted
 *Return:returns integer count of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len + = 1;
	return (len);
}
