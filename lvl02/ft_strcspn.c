#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(s[i] != '\0')
    {
        j = 0;
        while(reject[j] != '\0')
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

#include <string.h>

int main() {
    const char *s = "hello123";
    const char *reject = "0123456789";

    size_t len = strcspn(s, reject);
    size_t len1 = ft_strcspn(s, reject);
    printf("Length of initial segment without digits: %zu\n", len);
    printf("Length of initial segment without digits: %zu\n", len1);
    return 0;
}