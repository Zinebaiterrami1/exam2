#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i;
    int j;
    int found;

    i = 0;
    while(s[i] != '\0')
    {
        j = 0;
        found = 0;
        while(accept[j] != '\0')
        {
            if(s[i] == accept[j])
            { 
                found = 1;
                break;
            }
            j++;
        }
        if(!found)
            break;
        i++;
    }
    return (i);
}

#include <string.h>

int main() {
    // const char *s = "hello";
    // const char *accept = "hle";

    // size_t len = strspn(s, accept);
    // size_t len1 = ft_strspn(s, accept);
    // printf("Length of initial segment without digits: %zu\n", len);
    // printf("Length of initial segment without digits my own: %zu\n", len1);

    printf("Result: %zu\n", ft_strspn("hello123", "hle")); // Expected: 4
    printf("Result: %zu\n", ft_strspn("abcd", "abc")); // Expected: 3
    printf("Result: %zu\n", ft_strspn("1337school", "123")); // Expected: 0
    return 0;
}