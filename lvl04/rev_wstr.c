#include <stdlib.h>
#include <unistd.h>
# define WD_NUM 1000
# define WD_LEN 1000

char	**ft_split(char *str)
{
	int i;
	int i2;
	int i3;
	char **tab;

	i = 0;
	i2 = 0;
	tab = (char**)malloc(sizeof(**tab) * WD_NUM);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] > 32)
		{
			i3 = 0;
			tab[i2] = (char*)malloc(sizeof(char) * WD_LEN);
			while (str[i] > 32)
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}

int main(int ac, char **av)
{
    int i;
    int j;
    int count;

    i = 0;
    count = 0;
    j = 0;
    if(ac == 2)
    {
        char **words;

        words = ft_split(av[1]);
        while(words[count])
            count++;
        while(words[i])
            i++;
        i--;
        while(i > 0)
        {   
            j = 0;
            while(words[i][j])
            {
                write(1, &words[i][j], 1);
                j++;
            }
            if(i != 0)
                write(1, " ", 1);
            i--;
        }
    }
    write(1, "\n", 1);
}