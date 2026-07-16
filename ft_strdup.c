#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *res;

    if (!s)
        return (NULL);
    res = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if(!res)
        return (NULL);
    ft_memcpy(res, s, ft_strlen(s) + 1)
    return (res);
}

/*int main(int argc, char *argv[])
{
    (void)argc;
    char *res = ft_strdup(argv[1]);
    printf("%s\n", res);
    free (res);
    return (0);
}*/