#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t len;

    len = 0;
    while(str[len])
        len++;
    return (len);
}


/*int main(int argc, char *argv[])
{
    (void)argc;
    printf("%d\n", ft_strlen(argv[1]));
    return (0);
}*/