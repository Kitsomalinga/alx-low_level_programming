#include "main.h"

/**
 * _isalpha - chack for alphabetic characters
 * @c: the character to be checked
 * Return: 1 for Alphebetic character or 0 for anything else
 */

int _isalpha(int c)

{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
