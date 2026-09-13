/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 21:30:01 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/13 02:23:03 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*res;
	
	s_len = ft_strlen(s);
	if (len + start > s_len)
		len = s_len - start;
	res = malloc(sizeof(char) * len);
	if (!res)
		return (NULL);
	res = ft_memcpy(res, s + start, len);
	return (res);
}

/*int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("%s\n", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	return (0);
}*/