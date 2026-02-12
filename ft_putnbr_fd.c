#include "libft.h"

void ft_putnbr_fd(int nb, int fd)
{
    if (nb == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if (nb < 0)
    {
        write(fd, "-", 1);
        nb = nb * -1;
    }
    if (nb >= 0 && nb <= 9)
    {
        char c = (nb + '0');
        write(fd, &c, 1);
    }
    else
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
}

/*int main (void)
{
    ft_putnbr_fd(-2147483648, 1);
    write(1, "\n", 1);  
    ft_putnbr_fd(5, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(-5, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(47204, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(-193, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(0, 1);
}*/