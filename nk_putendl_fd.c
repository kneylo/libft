#include "libft.h"

void nk_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}

/*int main(void)
{
    char *str = "Pameline";
    nk_putendl_fd(str, 1);
    return(0);
}*/