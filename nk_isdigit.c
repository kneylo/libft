#include "libft.h"
int nk_isdigit(int c)
{
    return(c >= '0' && c <= '9');
}

/*int main(void)
{
    if(nk_isdigit('a'))
        write(1, "True\n", 5);
    else
        write(1, "False\n", 6);
    return(0);
}*/