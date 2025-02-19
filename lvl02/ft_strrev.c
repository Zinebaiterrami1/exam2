#include <stdio.h>

char    *ft_strrev(char *str)
{
    int start;
    int end;
    char tmp;

    start = 0;
    end = 0;
    if(!str)
        return (NULL);
    while(str[end])
        end++;
    end --;
    while (start < end)
    {
        tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
    return (str);
}

#include <stdio.h>

int main(void)
{
    char str1[] = "hello";
    char str2[] = "12345";
    char str3[] = "a";

    printf("Reversed: %s\n", ft_strrev(str1)); // "olleh"
    printf("Reversed: %s\n", ft_strrev(str2)); // "54321"
    printf("Reversed: %s\n", ft_strrev(str3)); // "a"

    return 0;
}
