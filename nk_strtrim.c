#include "libft.h"

char *nk_strtrim(char const *s1, char const *set)
{
    char *str;
    int start;
    int end;
    int new_len;

    start = 0;

    if (!s1)
        return(NULL);
    end = nk_strlen(s1);
    while (start < end && nk_strchr(set, s1[start]))
        start++;
    while(end > start && nk_strchr(set, s1[end - 1]))
        end--;
    new_len = end - start;
    str = malloc(sizeof(char)* (new_len + 1));
    if (!str)
        return(NULL);
    nk_strlcpy(str, s1 + start, new_len + 1);
    return(str);
}

/*int main(void)
{
    char const *s1 = "-- Hello world! --";
    char const *set = "- ";
    char *res;
    res = nk_strtrim(s1, set);
    printf("%s\n", res);
    free(res)
    return(0);
}*/