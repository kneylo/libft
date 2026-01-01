#include "libft.h"

int nk_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return(1);
    }
    else
        return(0);
}
/*int main(void)
{
    if (nk_isalpha('T') == 1)
    {
        write(1, "True\n", 5);
    }
    else 
    {
        write(1, "False\n", 6);
    }
    return(0);
}*/