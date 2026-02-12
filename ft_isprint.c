#include "libft.h"
int ft_isprint(int c)
{
    return(c >= 32 && c <= 126);
}

/*int main(void)
{
    if(ft_isprint('f'))
        write(1, "True\n", 5);
    else
        write(1, "False\n", 6);
    return(0);
}*/