#include "libft.h"

static char **nk_freearray(char **res, int i)
{
    while (i > 0)
    {
        i--;
        free(res[i]);
    }
    free(res);
    return(0);
}

static int nk_count_word(char const *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] == c)
            i++;
        else
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return(count);
}

/*static char *nk_insertword(char *word, char const *s, int i; int word_len)
{
    int j;

    j = 0;
    while (word_len > 0)
    {
        word[j] = s[i - word_len];
        j++;
        word_len--;
    }
    word[j] = '\0';
    return(word);
}*/

static char **nk_split_word(char const *s, char c, char **res, int nb_word)
{
    int i;
    int word;
    int word_len;
    int start;

    i = 0;
    word = 0;
    word_len = 0;
    start = 0;
    while (word < nb_word)
    {
        while (s[i] == c)   //passe les premiers separateurs
            i++;
        if (s[i] != c)
            start = i;
        while (s[i] && s[i] != c)   //sors au separateur
        {
            word_len++;
            i++;
        }
        res[word] = nk_substr(s, start, word_len); //place le mot dans le tableau avec substr
        /*res[word] = (char *)malloc(sizeof(char) * (word_len + 1)); //malloc le mot actuel*/
        if (!res[word])
            return(nk_freearray(res, word));
        word_len = 0; 
        word++; //passe au 'y' suivant, au prochain mot
    }
    res[word] = 0;
    return(res);
}

char    **nk_split(char const *s, char c)
{
    char **res;
    int nb_word;

    if (!s)
        return(NULL);
    nb_word = nk_count_word(s, c);
    res = (char **)malloc(sizeof(char *) * (nb_word + 1));
    if (!res)
        return(0);
    res = nk_split_word(s, c, res, nb_word);
    return(res);
}

/*int main(void)
{
    char **res;
    size_t i = 0;
    res = nk_split(" exercice de mort   ", ' ');
    if(res)
    {
        while(res[i])
        {
            printf("%s\n", res[i]);
            free(res[i]);
            i++;
        }
        free(res);
    }
    else
        printf("Erreur d'allocation\n");
    return(0);
}*/