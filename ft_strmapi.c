/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 23:14:19 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/15 15:19:54 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	res = ft_strdup(s);
	if (!res)
		return (NULL);
	i = 0;
	while (res[i])
	{
		res[i] = f(i, res[i]);
		i++;
	}
	return (res);
}

/*char f(unsigned int i, char c)
{
	if (i % 2 == 0)
		return(ft_toupper(c));
	return (c);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%s\n", ft_strmapi(argv[1], f));
	return (0);
}*/