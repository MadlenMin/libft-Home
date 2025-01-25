
#include <stdlib.h>
//What to do if destsize is 0 ?
size_t ft_strlcpy(char *dst, const char *src , size_t destsize)
{
    size_t i;
    i = 0;
    while (src[i] && i < (destsize - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    while (src[i])
    {
        i++;
    }
    return (i);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "Mama";
    char dest[20];
    int a = ft_strlcpy(dest,src,0);
    int b = strlen(src);
    printf("%d %d ", a, b);
    return 0;
}*/