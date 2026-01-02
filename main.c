#include "libft.h"
    
int main(void)
{
    char str[] = "i want to capitalize this sentence";
    nk_strcapitalize(str);
    nk_putstr(str);
    nk_putchar('\n');
    return(0);
}
