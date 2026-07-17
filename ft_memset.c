#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *str;

    str = s;
    while (n--)
        *str++ = (unsigned char)c;
    return(s);
}

//faster while version
/*while (n--)
    *str++ = (unsigned char)c    --> cast c to unsigned char to compare it
return(s)*/



/*#include <stdio.h>
int main(void)
{
    int i = 0;
    unsigned char s[100] = "Hello World";
    ft_memset(s, 42, 5);
    printf("%s\n", s);
    printf("first 5 bytes(as numbers) : ");
    while (i < 5)
    {
        printf("%d ", s[i]);
        i++;
    }
    printf("\nnow as characters :");
    i = 0;
    while (i < 5)
    {
        printf("%c ", s[i]);
        i++;
    }
    printf("\n");
    return(0);
}*/