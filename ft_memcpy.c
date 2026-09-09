/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 04:49:29 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/09 05:02:49 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	
	if (!dst && !src)
		return (dst);
	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("%s\n", (unsigned char *)ft_memcpy(argv[1], argv[2], atoi(argv[3])));
	printf("%s\n", (unsigned char *)memcpy(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/