#include "libft.h"
char *nk_strcat(char *dest, const char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i])
    {
        i++;
    }
    while(src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

/*int main(void)
{
    char dest[100] = "Hello ";
    char src[100] = "Steve!";
    nk_strcat(dest, src);
    nk_putstr(dest);
    write(1, "\n", 1);
    return (0);
}*/