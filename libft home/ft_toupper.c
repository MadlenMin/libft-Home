int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - ('a' - 'A'));
    return (c);
} 

#include <stdio.h>
int main()
{
    char a = 'a';
    char b = ' ';
    char c = 'b';
    printf("%c %c %c",ft_toupper(a), ft_toupper(b), ft_toupper(c));
    return 0;

}