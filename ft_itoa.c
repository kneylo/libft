/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 17:13:59 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/15 15:02:20 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(int nbr)
{
	int	res;

	res = 0;
	if (nbr <= 0)
		res++;
	while (nbr != 0)
	{
		res++;
		nbr /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;	
	long	nb;

	nb = (long)n;
	len = count_len(nb);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (nb == 0)
		return (res[0] = '0', res);
	if (nb < 0)
	{
		nb *= -1;
		res[0] = '-';
	}
	while (nb > 0)
	{
		res[len--] = nb % 10 + 48;
		nb /= 10;
	}
	return (res);
}

/*int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%s\n", ft_itoa(atoi(argv[1])));
	return (0);
}*/