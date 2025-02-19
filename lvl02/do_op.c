#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int nb;

    i = 0;
    j = 0;
    if(argc == 4)
    {
            if(argv[2][0] == '*')
            {
                nb = atoi(argv[1]) * atoi(argv[3]);
                printf("%d", nb);
            }
            else  if(argv[2][0] == '/')
            {
                nb = atoi(argv[1]) / atoi(argv[3]);
                printf("%d", nb);
            }
            else  if(argv[2][0] == '+')
            {
                nb = atoi(argv[1]) + atoi(argv[3]);
                printf("%d", nb);
            }
            else  if(argv[2][0] == '-')
            {
                nb = atoi(argv[1]) - atoi(argv[3]);
                printf("%d", nb);
            }
    }
    printf("\n");
}