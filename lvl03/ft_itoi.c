#include <stdlib.h>
#include <stdio.h>

int len_nbr(int nb)
{
    int len;
    
    len = 0;
    if(nb == 0)
        return(1);
    if(nb < 0)
        len ++;
    while (nb)
    {
        nb /= 10;
        len ++;
    }
    return(len);
}

char *fill_str(char *str, int nb, int len)
{
    int i;

    i = 0;
    if(nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    str[len] = '\0';
    len --;
    if(nb == 0)
    {
        str[0] = '0';
        return (str);
    }
    while (nb > 0)
    {
        str[len--] = (nb % 10) + '0';
        nb /= 10;
    }
    return(str);
}

char *ft_itoi(int nbr)
{
    int len;
    char *str;

    len = len_nbr(nbr);
    str = (char *)malloc(sizeof(char *) * (len + 1));
    if(!str)
        return(NULL);
    fill_str(str, nbr, len);
    return(str);
}