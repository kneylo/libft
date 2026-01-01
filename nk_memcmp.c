#include "libft.h"

int nk_memcmp(const void *dst, const void *src, size_t n)
{
    const unsigned char *d;
    const unsigned char *s;
    size_t i;

    d = (const unsigned char *) dst;
    s = (const unsigned char *) src;
    i = 0;
    if (n == 0)
    {
        return(0);
    }
    while (i < n)
    {
        if (s[i] != d[i])
        {
            return(s[i] - d[i]);
        }
        i++;
    }
    return(0);
}

/*int main(void)
{
    unsigned char *dst = "bonjour";
    unsigned char *src = "bonjour";
    int res;
    res = nk_memcmp(dst, src, 7);
    printf("%d\n", res);
}*/