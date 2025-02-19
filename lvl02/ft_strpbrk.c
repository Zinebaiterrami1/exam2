#include <unistd.h>
#include <stdio.h>


char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (!s1 || !s2)
		return (0);
    while(s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if(s1[i] == s2[j])
                return ((char *)&s1[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "hello world";
    char str2[] = "ow";
    
    // char str1[] = "hello";
    // char str2[] = "xyz";

    char *result = strpbrk(str1, str2);
    char *result1 = ft_strpbrk(str1, str2);
    if (result1)
        printf("First matching character: '%c'\t", *result1);
    else
        printf("No match found\n");

    return 0;
}
