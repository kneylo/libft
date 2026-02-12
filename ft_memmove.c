#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char tmp[len];
    const unsigned char *str;
    unsigned char *dest;
    size_t i;

    i = 0;
    str = src;
    dest = dst;
    while (i < len)
    {
        tmp[i] = str[i];
        i++;
    }
    i = 0;
    while (i < len)
    {
        dest[i] = tmp[i];
        i++;    
    }
    return(dst);
}

/*#include <stdio.h>
int main(void)
{
    char dst[] = "hello ";
    char src[] = "world!";
    ft_memmove(dst, src, 6);
    printf("%s\n", dst);
    return(0);
}*/