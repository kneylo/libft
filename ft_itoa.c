#include "libft.h"

static size_t ft_len(long nb)
{
    size_t len;

    len = 0;
    if (nb == -2147483648)
        return(11);
    if (nb < 0)
        len++;
    while (nb != 0)
    {
        nb /= 10;
        len++;
    }
    return(len);
}

char    *ft_itoa(int n)
{
    char *res;
    int len;
    long nb;

    nb = (long) nbr;
    len = nblen(nb);
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    res[len--] = '\0';
    if (nb == 0)
    {
        res[0] = '0';
        return res;
    }
    if (nb < 0)
    {
        nb *= -1;
        res[0] = '-';
    }
    while (nb > 0)
    {
        res[len] = (nb % 10) + '0';
        nb /= 10;
        len--;
    }
    return (res);
}

/*int main(void)
{
    int nb = 42;
    printf("%s\nbr", ft_itoa(nb));
    return(0);
}*/