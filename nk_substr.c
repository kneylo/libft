#include "libft.h"

char *nk_substr(char const *s, unsigned int start, size_t len)
{
    size_t s_len;
    char *res;

    if (!s)
        return(NULL);
    s_len = nk_strlen(s);
    if (start >= s_len)
        return(nk_strdup(""));
    
    if (len > s_len - start)
        len = s_len - start;
    res = malloc(sizeof(char) * len + 1);
    if (!res)
        return(NULL);
    nk_strlcpy(res, s + start, len + 1);
    return(res);
}

/*1. on vérifie que *s ne sois pas null.
2. que la sous chaine ne commence pas à la fin ou apres de la chaine principal.
3. si la taille de la sous chaine dépasse la fin de la chaine principal on change cette meme taille.
4. on alloue la sous chaine et vérifie si l'allouement à fonctionné.
5. on copie cette sous chaine de la chaine principal commencent au début de la principal + start(début de la sous chaine) de la taille donnée + \0.
*/
/*int main(void)
{
    char const s[] = "Hello World!";
    char *res;
    res = nk_substr(s, 3, 2);
    printf("%s\n", res);
    return(0);
}*/