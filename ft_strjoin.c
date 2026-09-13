/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 00:59:40 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/13 02:02:25 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len_tot;

	len_tot = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = malloc(sizeof(char) * len_tot);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, len_tot);
	ft_strlcat(res, s2, len_tot);
	return (res);
}

/*int main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("%s\n", ft_strjoin(argv[1], argv[2]));
	return (0);
}*/