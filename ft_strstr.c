#include "libft.h"

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int f;

    i = 0;
    f = 0;
    if (to_find[0] == '\0')
    {
        return (str);
    }
    while (str[i])
    {
        while (str[i + f] == to_find[f] && to_find[f])
        {            
            f++;
            if(to_find[f] == '\0')
            {
                return(str + i);
            }
        }
        f = 0;
        i++;
    }
    return (NULL);
}

//#include <string.h>
int main(void)
{
    char str[100] = "Hello World!";
    char to_find[100] = "j";
    char *final = ft_strstr(str, to_find);
    if(final)
    {
        write(1, final, ft_strlen(final));
        write(1, "\n", 1);
    }
    else
        write(1, "nu uh\n", 6);
    return (0);
}