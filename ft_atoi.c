#include "libft.h"
int ft_atoi(const char *str)
{
    int i;
    int res;
    int sign;

    i = 0;
    res = 0;
    sign = 1;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) //gérer les whitespaces
    {
        i++;
    }
    while(str[i] == '+' || str[i] == '-') //gérer le sign + ou -, mettre un if si exam
    {
        if (str[i] == '-')
            sign = sign * -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9') //gérer le nombre
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

/*#include <stdio.h>
int main (void)
{
    char	str[] = "\n+-+--1234567";
	printf("%d\n", ft_atoi(str));
	return (0);
}*/