#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    size_t s1_len;
    size_t s2_len;

    if (!s1 && !s2)
        return(NULL);
    if (!s1)
        return(ft_strdup(s2));
    if(!s2)
        return(ft_strdup(s1));
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    res = malloc(sizeof(char) * (s1_len + s2_len + 1));
    if(!res)
        return(NULL);
    ft_strlcpy(res, s1, s1_len + 1);
    ft_strlcat(res, s2,s1_len + s2_len + 1);
    return(res);
}

/*int main(void)
{
    const char *s1 = "Hello ";
    const char *s2 = "World!";
    char *res;
    res = ft_strjoin(s1, s2);
    printf("%s\n", res);
    free(res);
    return(0);
}*/