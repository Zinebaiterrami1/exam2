#include <unistd.h>

int is_dup(char *str, char c)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == c)
            return (1);
        i++;
    }
    return (0);
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
        while (av[1][i])
        {
            j = 0;
            while(av[2][j])
            {
                if(av[1][i] == av[2][j] && is_dup(tab, av[1][i]) == 0)
                {
                    tab[k] = av[1][i];
                    write(1, &tab[k], 1);
                    k++;
                    break;
                }
                j++;
            }
            i++;
        } 
    }
    write(1, "\n", 1);
}