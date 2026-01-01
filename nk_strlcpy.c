#include "libft.h"

size_t     nk_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    /*if (!src || !dst)  //to protect if one of the strings passed is NULL not in the function for 42
        return (0);*/
    if (dstsize == 0)
        return(nk_strlen(src));
    while (src[i] && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(nk_strlen(src));
}

/*int main(void)
{
    char dst[100];
    char src[100] = "Bonjour";
    size_t res;
    res = nk_strlcpy(dst, src, 10);
    printf("&s\n", dst);
    printf("&d\n", res);
    return(0);
}*/