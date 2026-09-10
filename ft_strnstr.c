/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 01:08:16 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/11 01:38:29 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] && i + j == len && haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == 0)
				return ((char *)haystack + i);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/*int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/