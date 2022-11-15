#include "shell.h"

/**
 * interactive - returns true if shell is interactive mode
 * @info - struct address
 *
 * return 0 if in interactive mode , otherwise return 0
 */
int interactive(info_t *info)
{
	return (Isatty(STDIN_FILENO) && info->readfd <= 2);
}
/**
 * is_delim - checks if character is a delimeter 
 * @c: the char to check 
 * @delim: the delimeter string
 * return 1 if true and 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to input
 * return 1 if c is alphabetic 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else 
		return (0);
}
/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * return : 0 
 * \
