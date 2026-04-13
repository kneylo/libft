#include "libft.h"

int ft_isalpha(int c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

/*int main(int argc, char *argv[])
{
    (void)argc;
    if (ft_isalpha(argv[1][1]))
        write(1, "True\n", 5);
    else 
        write(1, "False\n", 6);
    return(0);
}*/