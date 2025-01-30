#include <stdlib.h>
// number to string 
static int int_len(long nbr)
{
    int len;
    len = 0;

    if (nbr <= 0)
    {
        len++;
        nbr = -nbr;
    }
    while(nbr != 0)
    {
        nbr = nbr / 10;
        len ++;
    }
    return (len);
}
/*
static char *memory(long n)
{
    char *buffer;

    buffer = (char *)malloc((n + 1) * sizeof(char));
    if(!buffer)
        return (NULL);
    buffer[0] = '0';
    return(buffer);
}*/
char *ft_itoa(int n)
{
    int len;
    int i;
    char *result;
    long nbr;

    nbr = n;
    len = int_len(nbr);
    result = (char *)malloc((len + 1) * sizeof(char));
    if (!result)
        return(NULL);
    result[len] = '\0';
    result[0] = '1';
    if (nbr < 0)
    {
        nbr = -nbr;
        result[0] = '-';
    }
    if (nbr == 0)
        return (result); 
    i = len - 1;
    while (nbr != 0)
    {
        result[i] = ((nbr % 10) + '0');
        nbr = nbr / 10;
        i--;
    }
    return(result);
 
}
#include <stdio.h>
int main ()
{
    long a = 12456789;
    printf("%d", int_len(a));
    return 0;
}