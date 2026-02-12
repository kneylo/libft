#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *str;

    str = s;
    while(n--)
    {
        *str++ = '\0';
    }
    //return(s);
}

/*#include <stdio.h>
int main(void)
{
    int i = 0;
    unsigned char str[100];
    ft_bzero(str, 5);
    printf("first 5 as numbers : ");
    while (i < 5)
    {
        printf("%d ", str[i++]);
    }
    i = 0;
    printf("\nfirst 5 as characters : ");
    while (i < 5)
    {
        printf("%d ", str[i++]);
    }
    printf("\n");
    return(0);
}*/