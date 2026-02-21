#include "libft.h"

int nblen(int nb)
{
    int len;
    
    len = 0;
    if (nb == -2147483648)
        return (11);
    if (nb < 0)
    {
        nb *= -1;
        len++;
    }
    if (nb == 0)
        return (1);
    while (nb > 0)
    {
        nb /= 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char *res;
    int len;
    long nb;

    nb = (long) n;
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

/*int main(int argc, char *argv[])
{
    (void)argc;
    printf("%s\n", ft_itoa(ft_atoi(argv[1])));
    return (0);
}*/