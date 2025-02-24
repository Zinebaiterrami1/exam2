#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if(str[i]== '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i])
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return(result * sign);
}

int ft_prime(int nb)
{
    int i;

    i = 2;
    while(i < nb)
    {
        if(nb % i == 0)
            return(0);
        i++;
    }
    return(1);
}

int ft_add_prime_sum(int nb)
{
    int i;
    int prime_sum;

    i = 2;
    prime_sum = 0;
    if(nb <= 0)
        return (0);
    while(i <= nb)
    {
        if(ft_prime(i) == 1)
            prime_sum += i;
        i++;
    }
    return (prime_sum);
}

//add also ft_putnbr && ft_putchar
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + 48);
}

int main(int ac, char **av)
{
    int i;
    int nb;
    i = 0;
    
    if(ac == 2)
        ft_putnbr(ft_add_prime_sum(ft_atoi(av[1])));
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}