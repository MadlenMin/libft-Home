int ft_isdigit(int c)
{
    if (c >= 0 && c <= 9)
        return (1);
    return (0);
}

/*#include <stdio.h>

int main()
{
    int a = 36;
    int t = 0;
    int c = -3;
    char j = 'j';
    int aa = ft_isdigit(a);
    int tt = ft_isdigit(t);
    int cc = ft_isdigit(c);
    int jj = ft_isdigit(j);
    printf("a = %d , t = %d, c = %d, j = %d ", aa,tt,cc,jj);
    return 0;

}*/