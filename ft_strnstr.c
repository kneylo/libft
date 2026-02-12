#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (needle[0] == '\0')
    {
        return((char *)haystack);
    }
    while (haystack[i] && i < len)
    {
        while (haystack[i + j] == needle[j] && (i + j) < len && needle[j])
        {
            j++;
            if (needle[j] == '\0')
            {
                return((char *)haystack + i);
            }
        }
        j = 0;
        i++;
    }
    return(NULL);
}

/*#include <string.h>
int main(void)
{
    const char *haystack = "hello world";
    const char *needle = "wor";
    const char *final;

    final = ft_strnstr(haystack, needle, 3);
    if (final)
    {
        write(1, final, strlen(final));
        write(1, "\n", 1);
    }
    else
        write(1, "nu uh\n", 6);
    return(0);
}*/