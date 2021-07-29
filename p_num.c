#include "holberton.h"
/**
* p_num - prints
* @args: args
* Return: num
*/
int p_num(va_list args)
{
    long int i;
    int l = 0, m = 1;
    unsigned int n;

    i = va_arg(args, int);
    /*Looping until d == 100000*/
    while ((n / m) > 9)
        m *= 10;
    if (i < 0)
    {
        l += putachar('-');
        n = i * -1;
    }
    else
        n = i;
    /*Loops % returns a digit by modulating*/
    while (m != 0)
    {
        /*prints a int in ASCII*/
        l += putachar('0' + (n / m));
        n %= m;
        m /= 10;
    }
    return (l);
}