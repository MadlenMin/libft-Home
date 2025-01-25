int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
     return(1);
    return (0);
}

/*
#include <stdio.h>

int main ()
{
    char a = 'A';
    char b = 'и'; // why is this working the wey it should ?
    int aa = ft_isascii(a);
    int bb = ft_isascii(b);
    printf("%d %d ", aa, bb);
    return 0 ;

}*/