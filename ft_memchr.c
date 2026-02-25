#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    const unsigned char *str;

    str = (const unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
            return ((void *)&str[i]);
        i++;
    }
    return (NULL);
}


/*int main(int argc, char *argv[])
{
    (void)argc;
    printf("%s\n", (char *)ft_memchr(argv[1], argv[2][0], ft_atoi(argv[3])));
    return (0);
}*/