/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 05:01:59 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/10 14:56:09 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;

	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	res = ft_memcpy(res, s, ft_strlen(s) + 1);
	return (res);
}

/*int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("erreur at allocation\n");
		return (1);
	}
	char *test = ft_strdup(argv[1]);
	if (!test)
	{
		printf("erreur at strdup\n");
		return (1);
	}
	else
		printf("allocation's good\n");
	printf("%s\n", test);
	printf("%s\n", test);
	free(test);
	return (0);
}*/