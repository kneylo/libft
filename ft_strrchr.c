/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:02:16 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/11 00:54:25 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*int main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("%s\n", ft_strrchr(argv[1], argv[2][0]));
	printf("%s\n", strrchr(argv[1], argv[2][0]));
	return (0);
}*/