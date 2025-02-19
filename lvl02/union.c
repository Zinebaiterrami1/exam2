#include <unistd.h>

int check_dup(char *str, char c)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return (1);
        i++;
    }
    return(0);
}

int main(int ac, char **av)
{
    int i;
    int j;
    int k;
    char tab[127];

    i = 0;
    j = 0;
    k = 0;
    if(ac == 3)
    {
        while(av[1][i])
        {
            if(check_dup(tab, av[1][i]) == 0)
            {
                tab[k] = av[1][i];
                write(1, &av[1][i], 1);
                k++;
            }
            i++;
        } 
        while(av[2][j])
        {
            if(check_dup(tab, av[2][j]) == 0)
            {
                tab[k] = av[2][j];
                write(1, &av[2][j], 1);
                k++;
            }
            j++;
        }
    }
}                                                                                                                                                                                           