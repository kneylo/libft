#include "libft.h"

void *nk_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *dest;
    const unsigned char *str;

    dest = dst;
    str =  src;
    while (n--)
    {
        *dest++ = *str++;
    }
    return (dst);
}

/*#include <stdio.h>
int main(void)
{
    int i = 0;
    unsigned char dest[100];
    unsigned char str[100];
    while (i < 5)
    {
        str[i] = i + 1;
        dest[i] = i + 12;
        i++;
    }
    i = 0;
    printf("first 5 bytes before memcpy(as int) : ");
    while (i < 5)
    {
        printf("%d ", dest[i++]);
    }
    nk_memcpy(dest, str, 5);
    printf("first 5 bytes after memcpy : ");
    i = 0;
    while (i < 5)
    {
        printf("%d ", dest[i++]);
    }
    printf("\n");
    return (0);
}*/