#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while ((i < n) && (s1[i] || s2[i]))
    {
        if ((unsigned char) s1[i] != (unsigned char) s2[i]) 
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        i++;
    }
    return (0);
}

/*#include <stdio.h>
int main(void)
{
    const char *s1 = "hello";
    const char *s2 = "hello";
    int diff;
    diff = ft_strncmp(s1, s2, 0);
    if (diff != 0)
        printf("%d\n", diff);
    else
        printf("les 2 strings sont égals\n");
    return(0);
}*/