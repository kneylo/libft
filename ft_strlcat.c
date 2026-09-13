/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 16:47:09 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/13 01:24:04 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dsize <= d_len)
		return (s_len + dsize);
	i = 0;
	while (src[i] && d_len + i < dsize - 1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}

/*int main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	char	dst1[20] = "hello";
	char	dst2[20] = "hello";
	size_t	ret1;
	size_t	ret2;
	ret1 = ft_strlcat(dst1, argv[1], atoi(argv[2]));
	ret2 = strlcat(dst2, argv[1], atoi(argv[2]));

	printf("ft: %s, return: %ld\n", dst1, ret1);
	printf("vrai : %s, return: %ld\n", dst2, ret2);
}*/