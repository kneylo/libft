#include "libft.h"

int nk_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return(0);
    while (s1[i] && s1[i] == s2[i] && i < n - 1)
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int main(void)
{
    const char *s1 = "hello";
    const char *s2 = "hello";
    int diff;
    diff = nk_strncmp(s1, s2, 0);
    if (diff != 0)
        printf("%d\n", diff);
    else
        printf("les 2 strings sont égals\n");
    return(0);
}*/