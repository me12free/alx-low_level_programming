#include "main.h"
/**
 * _isalpha -  function that checks for alphabetic character.
 *
 * @c: parametr to checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * and 0 otherwise
 */
int _isalpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
                return (1);
        else
                return (0);
}
