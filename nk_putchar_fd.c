#include "libft.h"

void nk_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*int main(void)
{
    nk_putchar_fd('N', 1);
    nk_putchar_fd('\n', 1);
    return (0);
}*/