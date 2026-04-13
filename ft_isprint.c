#include "libft.h"

int ft_isprint(int c)
{
    return(c >= 32 && c <= 126);
}

/*int main(int argc, char *argv[])
{
    (void)argc;
    if (ft_isprint(argv[1][1]))
        write(1, "True\n", 5);
    else 
        write(1, "False\n", 6);
    return(0);
}*/