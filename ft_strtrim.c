/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 02:06:05 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/13 02:29:25 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	end;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end > 0 && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, 0, end + 1));	
}

/*int main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
	return (0);
}*/