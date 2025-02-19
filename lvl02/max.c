#include <stdio.h>

int max(int *tab, unsigned int len)
{
    int i;
    int max;

    
    i = 0;
    max = tab[0];
    i = 1;
    while(i < len)
    {
        if(max < tab[len])
            max = tab[len];
        i++;
    }
    return (max);
}