#include <unistd.h>

int             ft_atoi(const char *str)
{
    int nb;
    int i;
    int sign;

    i = 0;
    sign = 1;
    nb = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i ++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign = -1;
        i++;            
    }
    while(str[i] != '\0')
    {
        nb = nb * 10 + (str[i] - 48);
        i++;
    }
    return(sign * nb);
}

#include <stdio.h>

int main()
{
    printf("%d", ft_atoi("123"));
}