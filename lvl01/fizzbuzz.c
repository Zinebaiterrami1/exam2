#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + 48);
    }
    else 
        ft_putchar(nb + 48);
}

int main(int ac,  char **av)
{
    int i;
    int nb;

    i = 0;
    nb = 1;
    while (nb <= 100)
    {
        if(nb % 3 == 0 && nb % 5 == 0)
            write(1, "fizzbuzz", 9);
        else if(nb % 5 == 0)
            write(1, "buzz", 4);
        else if(nb % 3 == 0)
            write(1, "fizz", 4);
        else
            ft_putnbr(nb);
        write(1, "\n", 1);
        nb++;
    }
    
}