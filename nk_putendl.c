#include "libft.h"

void nk_putendl(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

/*int main(void)
{
    char *str = "Steve";
    nk_putendl(str);
    return(0);
}*/