#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *str)
{
    int i;
    char *array;
    int size;

    if (str == NULL)
        return (NULL);
    i = 0;
    while(str[i])
        i++;
    size = i;
    array = malloc(sizeof(char) * (size + 1));
    if(!array)
        return (NULL);
    i = 0;
    while (str[i])
    {
        array[i] = str[i];
        i++;
    }
    array[i] = '\0';
    return (array);
}