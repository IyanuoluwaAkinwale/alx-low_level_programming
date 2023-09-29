#include "main.h"

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	int i = 0;

	if (length <= 1)
		return (1);

	/*if (s[i] == s[length / 2])
		return (1);*/

	if (s[i] == s[length - 1 - i])
		return (is_palindrome(s + 1, i + 1));

	return 0;
}
