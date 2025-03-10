#include <unistd.h>

void str_capitalizer(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        write(1, &str[i], 1);
        i++;
    }
}


int main(int argc, char **argv)
{
    int i;

    if(argc < 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while(i < argc)
        {
            str_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
}