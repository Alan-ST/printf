#include "holberton.h"
/**
* p_char - prints characters
* @args: args
* Return: 1
*/
int p_char(va_list args)
{
    putachar(va_arg(args, int));
    return (1);
}