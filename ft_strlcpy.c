/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 18:21:44 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/10 15:27:57 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	if (!dsize)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

/*int main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	char	dst1[20] = "hello";
	char	dst2[20] = "hello";
	size_t	ret1;
	size_t	ret2;
	ret1 = ft_strlcpy(dst1, argv[1], atoi(argv[2]));
	ret2 = strlcpy(dst2, argv[1], atoi(argv[2]));

	printf("ft: %s, return: %ld\n", dst1, ret1);
	printf("vrai : %s, return: %ld\n", dst2, ret2);	
}*/