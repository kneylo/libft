#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t len;

    len = 0;
    while(str[len])
        len++;
    return (len);
}


//#include <stdio.h>
/*void ft_miniputnbr(int nb)
{
    char c;

    if (nb >= 0 && nb <= 9)
    {
        c = nb + '0';
        write(1, &c, 1);
    }
    else if (nb > 9)
    {
        ft_miniputnbr(nb / 10);
        ft_miniputnbr(nb % 10);
    }
}

int main(void)
{
    int lenght;
    lenght = ft_strlen("Steve!");
    ft_miniputnbr(lenght);
    write(1, "\n", 1);
    //printf("%d\n", lenght);
    return (0);
}*/