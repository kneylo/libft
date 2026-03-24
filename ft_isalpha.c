#include "libft.h"

int ft_isalpha(int c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
/*int main(void)
{
    if (ft_isalpha('T') == 1)
    {
        write(1, "True\n", 5);
    }
    else 
    {
        write(1, "False\n", 6);
    }
    return(0);
}*/