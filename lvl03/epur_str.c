#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int len;
    
    i = 0;
    while(av[1][i])
        i++;
    len = i - 1;
    i = 0;
    if(ac == 2)
    {
        if(av[1][0] == ' ' || av[1][0] == '\t')
        {
            while (av[1][i] == ' ' || av[1][i] == '\t')
            {
                if(av[1][i] != ' ' && av[1][i] != '\t')
                    break;
                i++;
            }
        }
        if(av[1][len] == ' ' || av[1][len] == '\t')
        {
            while(av[1][len] == ' ' || av[1][len] == '\t')
            {
                if(av[1][len] != ' ' && av[1][len] != '\t')
                    break;
                len--;
            }
        }
        while(av[1][i])
        {
            if(av[1][i] == ' ' || av[1][i] == '\t')
            {
                write(1, " ", 1);
            while(av[1][i + 1] == ' ' || av[1][i + 1] == '\t')
                i++;
            }
            else
                write(1, &av[1][i], 1);
                if(av[1][i] == av[1][len])
                    break;
            i++;
        }
    }
    write(1, "\n", 1);
}