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
            i++;
        }
        while (ft_isalpha(str[i]))
        {
            str[i] = ft_tolower(str[i]);
            i++;
        }
    }
    return(str);
}

/*int main(int argc, char **argv)
{
    (void)argc;
    printf("%s\n", ft_strcapitalize(argv[1]));
    return (0);
}*/