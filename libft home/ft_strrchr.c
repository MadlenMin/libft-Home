#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    char *temp;
    temp = NULL;
    while(*s)
    {
        if (*s == c)
            temp = (char *)s;
        s++;
    }
     if (c == '\0')
    {
        while (*s)
            s++;
        return ((char *)s);
    }
    return (temp);    
}
#include <stdio.h>
int main()
{
    char c = '\0';
    char arr[10] = "Madeleine";
    printf("%s", ft_strrchr(arr,c));
    return 0;
}