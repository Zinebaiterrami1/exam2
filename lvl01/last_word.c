#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int i;
    int j;
    int len;

    i = 1;
    j = 0;
    len = 0;
    if(ac == 2)
    {
        while (av[1][i] != '\0')
            i++;
        len = i - 1;
        while (av[1][len] == ' ' || av[1][len] == '\t')
        {
            len--;
        }
        while (av[1][len] != ' ' && av[1][len] != '\t' && len > 0)
        {   
            len--;
        }
        i = len;
        while (av[1][i])
        {
            if (av[1][i] != ' ' && av[1][i] != '\t')
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}