#include "libft.h"

char *nk_strcapitalize(char *str)
{
    int i;

    i = 0;
    if (!str)
        return NULL;
    while (str[i])
    {
        while (!(nk_isalpha(str[i])))
            i++;
        if (nk_isalpha(str[i]))
        {
            str[i] = nk_toupper(str[i]);
            while (nk_isalpha(str[i]))
                i++;
        }
    }
    return(str);
}

/*int main(void)
{
    char str[] = "i want to capitalize this sentence";
    nk_strcapitalize(str);
    nk_putstr(str);
    nk_putchar('\n');
    return(0);
}*/