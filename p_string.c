#include "holberton.h"
/**
* p_string - prints a string
* @args: args
* Return: str
*/
int p_string(va_list args)
{
    int i;
    char *str;

    str = va_arg(args, char*);
    if (str == NULL)
        str = "(null)";
    for (i = 0; str[i] != '\0'; i++)
		putachar(s[i]);
    return (i);
}