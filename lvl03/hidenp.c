#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    int count;
    int len;

    count = 0;
    len = 0;
    i = 0;
    j = 0;
    
    if(ac == 3)
    {
         while(av[1][i])
        i++;
        len = i;
        i = 0;
        while(av[1][i])
        {
            while(av[2][j])
            {
                if(av[1][i] != av[2][j])
                    j++;
                else{
                    count++;
                    break;
                }
            }   
            i++;
        }
        if(count == len)
            write(1, "1\n", 1);
        else
            write(1, "0\n", 1);
    }
    write(1, "\n", 1);
}