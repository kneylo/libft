#include "libft.h"

int ft_isascii(int c)
{
    return(c >= 0 && c <= 127);
}

/*int main(int argc, char *argv[])
{
    (void)argc;
    if (ft_isascii(argv[1][1]))
        write(1, "True\n", 5);
    else 
        write(1, "False\n", 6);
    return(0);
}*/