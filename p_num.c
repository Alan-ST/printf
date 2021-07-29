#include "holberton.h"
/**
* p_num - prints
* @args: args
* Return: num
*/
int p_num(va_list args)
{
    long int i;
    int l = 0, d = 1;
    unsigned int n;

    i = va_arg(args, int);
    /*Return a "-"*/
    if (i < 0)
    {
        l += putachar('-');
        n = i * -1;
    }
    else
        n = i;
    
    /*Looping until d == 100000*/
    while ((n / d) > 9)
        d *= 10;
    
    /*Loops % returns a digit by modulating*/
    while (d != 0)
    {
        /*prints a int in ASCII*/
        l += putachar('0' + (n / d)); 
        n %= d;
        d /= 10;
    }
    return (l);
}