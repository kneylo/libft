#include "libft.h"
void nk_putstr_fd(char *s, int fd)
{
    int i;

    if (!s)
        return;
    i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}

/*int main(void)
{
    char *s = "Steve!";
	nk_putstr_fd(s, 1);
    nk_putchar('\n');
	return (0);
}*/