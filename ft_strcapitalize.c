#include "libft.h"

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    if (!str)
        return NULL;
    while (str[i])
    {
        while (!(ft_isalpha(str[i])))
            i++;
        if (ft_isalpha(str[i]))
        {
            str[i] = ft_toupper(str[i]);
            while (ft_isalpha(str[i]))
                i++;
        }
    }
    return(str);
}

/*int main(void)
{
    char str[] = "i want to capitalize this sentence";
    ft_strcapitalize(str);
    ft_putstr(str);
    ft_putchar('\n');
    return(0);
}*/