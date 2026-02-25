#include "libft.h"

char       *ft_strdup(const char *s)
{
    char *res;
    size_t i;

    if (!s)
        return (NULL);
    res = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if(!res)
        return(NULL);
    i = 0;
    while(s[i])
    {
        res[i] = s[i];
        i++;
    }
    res[i] = '\0';
    return(res);
}

/*int main(int argc, char *argv[])
{
    (void)argc;
    char *res = ft_strdup(argv[1]);
    printf("%s\n", res);
    free (res);
    return (0);
}*/