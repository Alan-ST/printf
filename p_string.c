#include "holberton.h"
/**
* p_string - prints a string
* @args: args
* Return: str lenght
*/
int p_string(va_list args)
{
    int i;
    char *str;

    str = va_arg(args, char*);
    if (str == NULL)
        str = "(null)";
    for (i = 0; str[i] != '\0'; i++)
		putachar(str[i]);
    return (i);
}