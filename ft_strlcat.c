#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    int dst_len;
    int src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = dst_len;
    j = 0;
    if ((size_t) dst_len >= size)
    {
        return(size + src_len);
    }
    while(src[j] && i < size - 1)
    {
        dst[i++] = src[j++];
    }
    dst[i] = '\0';
    return(dst_len + src_len);
}

/*#include <stdio.h>
int main(void)
{
    char dst[] = "Hello ";
    const char src[] = "World!";
    size_t final;
    final = ft_strlcat(dst, src, 12);
    printf("%ld\n", final);
    return(0);
}*/