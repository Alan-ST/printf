#include "holberton.h"
/**
* p_num - prints
* @args: args
* Return: num
*/
int p_num(va_list args)
{
    int i, l = 0, d = 1;
    unsigned int n;

    i = va_arg(args, int);
    if (i < 0)
    {
        l += putachar('-');
        n = i * -1;
    }
    n = i;

    while (n / d > 9)
        d *= 10;
    
    while (d != 0)
    {
        l += putachar('0' + n / d);
        n %= d;
        d /= 10;
    }
    return (l);
}