int ft_isalnum(int c)
{
    if ((c >= 0 && c <= 9) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}

/*
#include <stdio.h>

int main()
{
    int a = 0 ;
    char aa = 'A';
    int b = 7;
    int k = ft_isalnum(a);
    int j = ft_isalnum(aa);
    int bb =ft_isalnum(b);
    printf("%d %d %d ", k, j, bb);
    return (0);
}*/