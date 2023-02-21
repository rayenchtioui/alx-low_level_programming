#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c : caracter to be checked.
 * Return : 1 if the character is letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
