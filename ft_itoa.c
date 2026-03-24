#include <stdlib.h>

int nblen(int n)
{
    int i;

    i = 0;
    if (n <= 0)
    {
        i++;
        n *= -1;
    }
    while (n != 0)
    {
        i++;
        n /= 10;
    }
    return (i);
}

char *ft_itoa(int n)
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
        res[len] = '0';
        return (res);
    }
    if (nb < 0)
    {
        nb *= -1;
        res[0] = '-';
    }
    while (nb)
    {
        res[len--] = (nb % 10) + '0';
        nb /= 10;
    }
    return (res);
}

/*int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        printf("%s\n", ft_itoa(atoi(argv[1])));
        return (0);
    }
    return (1);
}*/