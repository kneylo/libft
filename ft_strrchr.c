#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    const char *first;

    first = str;
    while (*str)
        str++;
    if (c == '\0')
        return((char *) str);
    while(str >= first)
    {
        if (*str == c)
            return((char *) str);
        else
            str--;
    }
    return(NULL);
}
 
/*#include <stdio.h>
int main(void)
{
    const char *str = "Hello World";
    char *found;
    found = ft_strrchr(str, 'H');
    if (found)
        printf("Found : %s\n", found);
    else
        printf("Character not found.\n");
    return(0);
}*/