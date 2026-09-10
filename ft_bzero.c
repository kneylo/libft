/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:11:00 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/11 01:42:11 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, '\0', n);
}

/*int main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	size_t i = 0;
	size_t len = ft_strlen(argv[1]);
	printf("avant : %s\n", argv[1]);
	ft_bzero(argv[1], atoi(argv[2]));
	while (i < len)
	{
		if (argv[1][i] == 0)
			printf("0");
		else
			printf("%c", argv[1][i]);
		i++;
	}
	printf("\n");
	return (0);
}*/