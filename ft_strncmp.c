/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 03:52:13 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/10 14:56:29 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("good %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/
