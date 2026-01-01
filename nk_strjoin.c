#include "libft.h"

char *nk_strjoin(char const *s1, char const *s2)
{
    char *res;
    size_t s1_len;
    size_t s2_len;

    if (!s1 && !s2)
        return(NULL);
    if (!s1)
        return(nk_strdup(s2));
    if(!s2)
        return(nk_strdup(s1));
    s1_len = nk_strlen(s1);
    s2_len = nk_strlen(s2);
    res = malloc(sizeof(char) * (s1_len + s2_len + 1));
    if(!res)
        return(NULL);
    nk_strlcpy(res, s1, s1_len + 1);
    nk_strlcat(res, s2,s1_len + s2_len + 1);
    return(res);
}

/*int main(void)
{
    const char *s1 = "Hello ";
    const char *s2 = "World!";
    char *res;
    res = nk_strjoin(s1, s2);
    printf("%s\n", res);
    free(res);
    return(0);
}*/