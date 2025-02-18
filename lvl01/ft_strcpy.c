#include <unistd.h>

char *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i;
    char *s2 = "hello";
    char *s1 = (char *)malloc(sizeof(char) * (strlen(s2) + 1));
    printf("%s\n", ft_strcpy(s1, s2));
}