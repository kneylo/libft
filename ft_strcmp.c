#include "libft.h"

int ft_strcmp(char *s1, char *s2)
{
    int i;
   
    i = 0;
    while(s1[i] || s2[i])
    {
        if (s1[i] != s2[i])
        {
            return(s1[i] - s2[i]);
        }
        else
        {
            i++;
        }
    }
    return(0);
}

/*#include <stdio.h>
int main(void)
{
    char s1[] = "hello";
    char s2[] = "world";
    int value = ft_strcmp(s1, s2);
   
    if (value > 0)
        printf("La première string est plus grande\n");
    else if (value < 0)
        printf("La deuxième string est plus grande\n");
    else
        printf("les 2 strings sont égales\n");
    return(0);
}*/