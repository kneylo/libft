#include "libft.h"

char    *ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
    unsigned int i;
    size_t s_len;
    char *res;

    i = 0;
    if (!s)
        return(NULL);
    s_len = ft_strlen(s);
    res = malloc(sizeof(char) * (s_len + 1));
    if (!res)
        return(NULL);
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return(res);
}

/*char toupper_ifeven(unsigned int i, char c)
{
    return(i % 2 == 0 && c >= 'a' && c <= 'z') ? (c - 32) : (c);
}
int main(void)
{
    char *s = "abcdefghijklmnopqrstuvwxyz";
    char *res;
    res = ft_strmapi(s, toupper_ifeven);
    printf("%s\n", res);
    free(res);
    return(0);
}*/