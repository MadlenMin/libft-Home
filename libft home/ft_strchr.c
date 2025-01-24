#include <stdlib.h>
char *ft_strchr(const char *s,int c)
{
    if (c == '\0')
    {
        while (*s)
            s++;
        return ((char *)s);
    }

    while(*s)
    {
        if (*s == c)
            return ((char *)s);
        s++;
    }
    return (NULL);
}
#include <stdio.h>
int main()
{
    char c = 'a';
    char arr[10] = "Hyly";
    printf("%s", ft_strchr(arr,c));
    return 0;
}