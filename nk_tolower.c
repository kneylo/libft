#include "libft.h"

int nk_tolower(int c)
{
    if((c >= 'A' && c <= 'Z'))
        return(c + 32);
    else
        return(c);
}

//return (condition) ? -->value_if_true : -->value_if_false;
/*int nk_tolower(int c)
{
    return(c >= 'A' && c <= 'Z') ? (c + 32) : (c);
}*/

/*#include <stdio.h>
int main(void)
{
    int c = (nk_tolower('F'));
    prinft("%d\n", c);
    return(0);
}*/