int ft_toupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + ('a' - 'A'));
    return (c);
} 

#include <stdio.h>
int main()
{
    char a = 'A';
    char b = 'b';
    char c = '&';
    printf("%c %c %c",ft_toupper(a), ft_toupper(b), ft_toupper(c));
    return 0;

}