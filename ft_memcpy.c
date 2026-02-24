#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    size_t i;

    if (!dst || !src)
        return (dst);
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}

int main(int argc, char *argv[])
{
    (void)argc;
    printf("%s\n", (char *)ft_memcpy(argv[1], argv[2], atoi(argv[3])));
    return (0);
}