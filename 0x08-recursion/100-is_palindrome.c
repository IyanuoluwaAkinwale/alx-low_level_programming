#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int i);

/**
 * strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

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
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked
 * @i: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int check_palindrome(char *s, int i)
{
	int length = _strlen_recursion(s);

       /* if (s[i] == s[length / 2])*/
	/* return (1);*/

	if (s[i] == s[length - 1 - i])
		return (check_palindrome(s + 1, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	int i = 0;

	if (length <= 1)
		return (1);

	return (check_palindrome(s, i));
}
