#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int start;
    int end;
    int new_len;

    start = 0;

    if (!s1)
        return(NULL);
    end = ft_strlen(s1);
    while (start < end && ft_strchr(set, s1[start]))
        start++;
    while(end > start && ft_strchr(set, s1[end - 1]))
        end--;
    new_len = end - start;
    str = malloc(sizeof(char)* (new_len + 1));
    if (!str)
        return(NULL);
    ft_strlcpy(str, s1 + start, new_len + 1);
    return(str);
}

/*int main(void)
{
    char const *s1 = "-- Hello world! --";
    char const *set = "- ";
    char *res;
    res = ft_strtrim(s1, set);
    printf("%s\n", res);
    free(res)
    return(0);
}*/