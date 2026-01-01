#include "libft.h"
int nk_isascii(int c)
{
    return(c >= 0 && c <= 127);
}

/*int main(void)
{
    if(nk_isascii('f'))
        write(1, "True\n", 5);
    else
        write(1, "False\n", 6);
    return(0);
}*/