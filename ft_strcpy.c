#include "libft.h"

char *ft_strcpy(char *dest, char *src)
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
    ft_strcpy(name ,"Steve!");
    ft_putstr(name);
    write(1, "\n", 1);
    return (0);
}*/