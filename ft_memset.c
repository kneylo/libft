#include "libft.h"
//stddef is for size_t, if using malloc, stdlib.h got size_t too
//if malloc --> stdlib.h || if there's only size_t --> stdded.h

void *ft_memset(void *s, int c, size_t len)
{
    unsigned char *str;

    str = s;
    while (len)
    {
        *str = c;
        str++;
        len--;
    }
    return(s);
}

//faster while version
/*while (len--)
    *str++ = (unsigned char)c    --> change the (int) of c to unsigned char to compare it
return(s)*/



/*#include <stdio.h>
int main(void)
{
    int i = 0;
    unsigned char s[100];
    ft_memset(s, 42, 5);
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