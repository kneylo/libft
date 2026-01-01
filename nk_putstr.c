#include "libft.h"

void nk_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

/*int main(void)
{
    char *str = "Steve";
    nk_putstr(str);
    write(1, "\n", 1);
    return(0);
}*/