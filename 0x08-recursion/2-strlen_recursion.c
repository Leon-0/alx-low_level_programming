#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: Pointer to the characters of string
 * Return: returns the position of the next char
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
	return (0);
}
else
{
	return (1 + string_length(s + 1));
}

}
