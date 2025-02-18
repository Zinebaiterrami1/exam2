#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if(ac == 2)
    {
        while (av[i][j] == ' ' || av[i][j] == '\t')
            j++;
        while (av[i][j] != ' ' && av[i][j] != '\t' && av[i][j] != '\0')
        {
            write(1, &av[i][j], 1);
            j++;
        }
        if(av[i][j] == ' ' || av[i][j] == '\t')
        {
            write(1, "\n", 1);
            return(0);
        }
    }
    write(1, "\n", 1);
}