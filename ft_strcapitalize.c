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
            ft_toupper(str[i++]);
        while (ft_isalpha(str[i]))
        {
            ft_tolower(str[i++]);
        }
    }
    return(str);
}

/*int main(int argc, char **argv)
{
    (void)argc;
    printf("%s\n", str_capitalize(argv[1]));
    return (0);
}*/