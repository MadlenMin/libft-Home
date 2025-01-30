
void ft_putnbr_fd(int n,int fd)
{
    long    nb;
    nb = n;

    if (nb == -2147483648)
        ft_putstr_fd("-2147483648",fd);
    if (nb < 0)
    {
        ft_putstr_fd('-');
        nb = -nb,
    }
    if (nb >= 10)
    {   
        ft_putnbr_fd(nb/10,fd);
        nb = nb % 10;

    }
}