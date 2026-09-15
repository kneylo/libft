/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 16:16:46 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/15 00:57:33 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!d || !s)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else if (dest > src)
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

/*int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("%s\n", (unsigned char *)ft_memmove(argv[1], argv[2], atoi(argv[3])));
	printf("%s\n", (unsigned char *)memmove(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/