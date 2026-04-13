#include "libft.h"

int ft_isalnum(int c)
{
    return((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*int main(int argc, char *argv[])
{
    (void)argc;
    if (ft_isalnum(argv[1][1]))
        write(1, "True\n", 5);
    else 
        write(1, "False\n", 6);
    return(0);
}*/