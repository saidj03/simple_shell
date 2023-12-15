#include "shell.h"

/**
 **_strncpy - a function to copy a string
 *@dest: the destination string
 *@src: the source string
 *@n: the amount of characters to be copied
 *Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l, m;
	char *str = dest;

	l = 0;
	while (src[l] != '\0' && l < n - 1)
	{
		dest[l] = src[l];
		l++;
	}
	if (l < n)
	{
		m = l;
		while (m < n)
		{
			dest[m] = '\0';
			m++;
		}
	}
	return (str);
}

/**
 **_strncat - concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: the amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, m;
	char *str = dest;

	l = 0;
	m = 0;
	while (dest[l] != '\0')
		l++;
	while (src[m] != '\0' && m < n)
	{
		dest[l] = src[m];
		l++;
		m++;
	}
	if (m < n)
		dest[l] = '\0';
	return (str);
}

/**
 **_strchr - locates a character in a string
 *@str: the string to be parsed
 *@c: the character to look for
 *Return: (str) a pointer to the memory area str
 */
char *_strchr(char *str, char c)
{
	do {
		if (*str == c)
		return (str);
	}
	while (*str++ != '\0');
	
	return (NULL);
}
