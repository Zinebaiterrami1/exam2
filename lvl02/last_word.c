#include <unistd.h>
#include <stdio.h>

// int main(int ac, char **av)
// {
//     int i;
//     int len;

//     if(ac == 2)
//     {
//         i = 0;
//         while (av[1][i] != '\0')
//             i++;
//         len = i;
//         len--;
//         while (av[1][len] == ' ' || av[1][len] == '\t')
//             len--;
//         while (av[1][len] != ' ' && av[1][len] != '\t' && len > 0)
//             len--;
//         if(av[1][len] == ' ' || av[1][len] == '\t')
//             i = len + 1;
//         else
//             i = len;
//         printf("len : %d\n", len);
//         printf("i : %d\n", i);
//         while(av[1][i])
//         {
//             write(1, &av[1][i], 1);
//             printf("[i] : %d\n", i);
//             i++;
//         }
//     }
//     write(1, "\n", 1);
// }

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int len;

    if(ac == 2)
    {
        i = 0;
        while (av[1][i] != '\0')
        {
            i++;
        }
        len = i;
        len--;
        while (av[1][len] == ' ' || av[1][len] == '\t')
            len--;
        while (av[1][len] != ' ' && av[1][len] != '\t' && len > 0)
            len--;
        if(av[1][len] == ' ' || av[1][len] == '\t')
            i = len + 1;
        else
            i = len;
        while(av[1][i])
        {
            if (av[1][i] != ' ' && av[1][i] != '\t')
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}