/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 03:28:53 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/15 15:08:55 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%d\n", ft_isprint(argv[1][0]));
	return (1);
}*/