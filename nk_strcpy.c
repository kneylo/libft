#include "libft.h"

char *nk_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

/*int main(void)
{
    char name[100];
    nk_strcpy(name ,"Steve!");
    nk_putstr(name);
    write(1, "\n", 1);
    return (0);
}*/