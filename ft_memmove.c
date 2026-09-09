/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 16:16:46 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/09 16:46:22 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;

	if (dest == src || n == 0)
		return (dest);
	tmp = (unsigned char *)src;
	tmp = ft_memcpy(tmp, src, n);
	return (ft_memcpy(dest, tmp, n));
}

/*int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("%s\n", (unsigned char *)ft_memmove(argv[1], argv[2], atoi(argv[3])));
	printf("%s\n", (unsigned char *)memmove(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/