#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;
    size_t i;

    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;
    i = 0;
    if (n == 0)
        return (0);
    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}

/*int main(int argc, char *argv[])
{
    (void)argc;
    printf("%d\n", ft_memcmp(argv[1], argv[2], ft_atoi(argv[3])));
    return (0);
}*/