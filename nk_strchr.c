#include "libft.h"
#include <stdio.h>

char *nk_strchr(const char *str, int c)
{
    while(*str)
    {
        if (*str == c)
        {
            return((char *)str);
        }
        else
        {
            str++;
        }
    }
    if (c == '\0')
        return((char *) str);
    return(NULL);
}

/*int main(void)
{
    char *str = "Hello World";
    char *found = nk_strchr(str, '\0');
    if (found)
        printf("Found : %s\n", found);
    else
        printf("Character not found.\n");
    return(0);
}*/