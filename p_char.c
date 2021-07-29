#include "holberton.h"
/**
* p_char - prints a character
* @args: args
* Return: 1
*/
int p_char(va_list args)
{
    /*Prints a character in ASCII*/
    putachar(va_arg(args, int));
    return (1);
}