#include "libft.h"

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = nb * -1;
    }
    if (nb >= 0 && nb <= 9)
    {
        char c = (nb + '0');
        write(1, &c, 1);
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

/*int main (void)
{
    ft_putnbr_fd(-2147483648);
    write(1, "\n", 1);  
    ft_putnbr_fd(5);
    write(1, "\n", 1);
    ft_putnbr_fd(-5);
    write(1, "\n", 1);
    ft_putnbr_fd(47204);
    write(1, "\n", 1);
    ft_putnbr_fd(-193);
    write(1, "\n", 1);
    ft_putnbr_fd(0);
}*/