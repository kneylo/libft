#include "libft.h"

static size_t nk_len(long nb)
{
    size_t len;

    len = 0;
    if (nb == -2147483648)
        return(11);
    if (nb <= 0)
        len++;
    while (nb != 0)
    {
        nb /= 10;
        len++;
    }
    return(len);
}

char    *nk_itoa(int n)
{
    char *res;
    long nbr;
    int len;
    int i;

    nbr = n;
    len = nk_len(nbr);
    i = len;
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return(NULL);
    res[i--] = '\0';
    if (nbr < 0)
    {
        nbr = -nbr;
        res[0] = '-';
    }
    while (nbr != 0)
    {
        res[i] = (nbr % 10) + '0';
        nbr = nbr / 10;
        i--;
    }
    if (n == 0)
        res[0] = '0';
    return(res);
}

/*int main(void)
{
    int nb = 42;
    printf("%s\nbr", nk_itoa(nb));
    return(0);
}*/