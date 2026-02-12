#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    if (!s)
        return;
    while(s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
//parcours chaque caractère de la string et lui appliquant f()

/*void toupper_ifeven(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c = *c - 32;
}
int main(void)
{
    char s[] = "abcdefghijklmnopqrstuvwxyz";
    ft_striteri(s, toupper_ifeven);
    printf("%s\n", s);
    return(0);
}*/