#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: Pointer to the characters of string
 *
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
	return0;
}
else
{
	return 1 + string_length(s + 1);
}

}
