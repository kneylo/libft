#include "libft.h"

int ft_toupper(int c)
{
    return (c >= 'a' && c <= 'z' ? (c - 32) : c);
}

/*int ft_tolower(int c)
{
    return (c >= 'A' && c <= 'Z') ? (c + 32) : c;
}*/

//condition ? value_if_true : value_if_false;

/*#include <stdio.h>
int main(void)
{
    int c = (ft_toupper('r'));
    printf("%d\n", c);
    return(0);
}*/