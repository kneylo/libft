#include "libft.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*int main(void)
{
    char c = 'P';
    ft_putchar(c);
    ft_putchar('\n');
    return(0);
}*/