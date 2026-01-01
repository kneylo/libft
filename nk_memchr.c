#include "libft.h"

void *nk_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str;

    str = s;
    while(n--)
    {
        if (*str == (unsigned char) c)
        {
            return((void *)str); //change le type de str pour pouvoir bien le return
        }
        else
        {
            str++;
        }
    }
    return(NULL);
}

/*#include <stdio.h>
int main(void)
{
    const char *str = "Bonjour";
    char *found = nk_memchr(str, 'j', 7); //stock la valeur dans found
    
    if (found) //si found != null
        printf("Found: %s\n", found);
    else
        printf("Character not found.\n");
    return(0);
}*/