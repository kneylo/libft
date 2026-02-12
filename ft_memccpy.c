#include "libft.h"

void *ft_memccpy(void *dst, const void *src,int c, size_t n)
{
    unsigned char *dest;
    const unsigned char *str;

    dest = dst;
    str =  src;
    while (n)
    {
       
        *dest = *str;
        if (*dest == (unsigned char )c)
        {
            return(dest + 1);
        }
        n--;
        str++;
        dest++;
    }
    return (NULL);
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
        dest[i] = i + 2;
        i++;
    }
    i = 0;
    printf("first 5 bytes before memccpy(as int) : ");
    while (i < 5)
    {
        printf("%d ", dest[i++]);
    }
    ft_memccpy(dest, str, 3, 5);
    printf("first 5 bytes after memccpy : ");
    i = 0;
    while (i < 5)
    {
        printf("%d ", dest[i++]);
    }
    printf("\n");
    return (0);
}*/