#include "libft.h"
int ft_isalnum(int c)
{
    return((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int main(void)
{
    if(ft_isalnum('F'))
        write(1, "True\n", 5);
    else
        write(1, "False\n", 6);
    return(0);
}