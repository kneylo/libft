/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 01:38:47 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/25 23:05:03 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;
	size_t	total;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	tmp = 0;
	total = nmemb * size;
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, total);
	return (tmp);
}

/*int main(void)
{
	char *p = (char *)ft_calloc(5, 5);
	if (!p)
		printf("calloc'nt\n");
	else
		printf("calloc's good\n");
	return (0);
}*/