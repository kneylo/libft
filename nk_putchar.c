#include "libft.h"

void nk_putchar(char c)
{
    write(1, &c, 1);
}

/*int main(void)
{
    char c = 'P';
    nk_putchar(c);
    nk_putchar('\n');
    return(0);
}*/