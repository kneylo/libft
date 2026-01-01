#include "libft.h"
    
int main(void)
{
    char s1[] = "hello";
    char s2[] = "world";
    int value = nk_strcmp(s1, s2);
   
    if (value > 0)
        printf("La première string est plus grande\n");
    else if (value < 0)
        printf("La deuxième string est plus grande\n");
    else
        printf("les 2 strings sont égales\n");
    return(0);
}