#include "holberton.h"
/**
* p_num - prints
* @args: args
* Return: num
*/
int p_num(va_list args)
{
    int i, div = 1, len = 0;
    unsigned int num;

    i = va_arg(args, int);
    if (i < 0)
    {
        len += putachar('-');
        num = i * -1;
    }
    else
        num = i;
    while (num / div > 9)
        div *= 10;
    while (div != 0)
    {
        len += putachar('0' + num / div);
        num %= div;
        div /= 10;
    }
    return (len);
}