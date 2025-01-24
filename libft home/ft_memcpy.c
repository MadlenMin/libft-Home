#include <stdlib.h>

void *ft_memcpy(void *restrict dst, const void *restrict src , size_t n)
{
    unsigned char *a;
    const unsigned char *b;
    size_t i;
    a = (unsigned char *)dst;
    b = (const unsigned char *)src;

    i = 0;
    while(i < n)
    {
        a[i] = b[i];
        i++;
    }
    return (dst);
}

#include <stdio.h>
//#include <string.h>

int main()
{
    char arr[100] = "Axper harazat";
    char src[50] = "       ";
    printf("%s" , (char *)ft_memcpy(arr,src,5));
    return 0;
}