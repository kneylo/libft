#include "libft.h"

char       *nk_strdup(const char *s)
{
    char *d;
    size_t i;
    d = malloc(sizeof(char) * (nk_strlen(s) + 1));
    if(!d)
    {
        return(NULL);
    }
    i = 0;
    while(s[i])
    {
        d[i] = (char)s[i];
        i++;
    }
    d[i] = '\0';
    return(d);
}

/*int main(void)
{
    unsigned char dest[] = "nu uh";
    unsigned char src[] = "steve";
    printf("dest avant: %s\n", dest);
    dest[] = nk_strdup(src);
    printf("dest après: %s\n", dest);
}*/