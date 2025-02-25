#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int nb;
    int sign;

    i = 0;
    nb = 0;
    sign = 1;

    while(str[i] == 32 || str[i] >= 9 && str[i] <= 13)
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i])
    {
        nb = nb * str_base;
        if(str[i] >= 'a' && str[i] <= 'f')
            nb += str[i] - 87;
        else if(str[i] >= 'A' && str[i] <= 'F')
            nb += str[i] - 55;
        else if(str[i] >= '0' && str[i] <= '9')
            nb += str[i] - 48;
        else
            return(0);
        i++;
    }
    return (nb * sign);
}