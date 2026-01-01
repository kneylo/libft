#include "libft.h"

char *nk_strrev(char *str)
{
    int i;
    int length;
    char tmp;

    i = 0;
    length = nk_strlen(str) - 1;

    while (i < length)
    {
        tmp = str[i];
        str[i] = str[length];
        str[length] = tmp;
        i++;
        length--;
    }
    return (str);
}

/*#include <stdio.h>
int main(void)
{
    char str[100];
    int i = 0;
    char *osef;

    printf("Enter a string to reverse : ");
    if (!(fgets(str, sizeof(str), stdin)))
    {    
        osef = "Nothing in the string!";
        write(1, osef, nk_strlen(osef));
        return 1;
    }
    //str is the tab, sizeof == 100 octect, 99 + \0, stdin is to get the text from the cmd
    str[nk_strlen(str)- 1] = '\0';
    //fgets has everything even '\n' before the '\0' so that line removes it
    nk_strrev(str);
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}*/