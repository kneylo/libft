/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:12:14 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/15 15:24:06 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	f(unsigned int i, char *s)
{
	if (i % 2)
		s[i] = ft_toupper(s[i]);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	ft_striteri(argv[1], f);
	printf("%s\n", argv[1]);
	return (0);
}*/