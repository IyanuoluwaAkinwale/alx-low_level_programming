#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * of bytes from string src into dest.             
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src
 * Return: A pointer to the resulting string dest.
 */                                               
char *_strncpy(char *dest, char *src, int n)
{
	int i;

        /*loop to ensure condition of n and letters in src*/
	for (i = 0; i < n && *src != '\0'; i++)
        {
                *dest = *src; /*replace dest character with src's*/
                dest++;/*increase address of dest*/
                src++;
                /*if src has reach end character and i is less than n*/
                if (i < n && *src == '\0')
                {
                        *dest = '\0'; /*add terminating character*/
                }
        }
        return (dest);
}
