/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 16:44:20 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/14 17:22:26 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **tab, int i)
{
	while (i < 0)
		free(tab[i--]);
	free(tab);
}

static int	count_words(char const *s, char sep)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i])
	{
		while (s[i] && s[i] == sep)
			i++;
		if (s[i] && s[i] != sep)
			res++;
		while (s[i] && s[i] != sep)
			i++;
	}
	return (res);
}

static char	**place_words(char const *s, char sep, char **tab, int wc)
{
	int	start;
	int	w_len;
	int	w_y;
	int	i;

	w_y = 0;
	i = 0;
	while (w_y < wc)
	{
		w_len = 0;
		while (s[i] && s[i] == sep)
			i++;
		if (s[i] && s[i] != sep)
			start = i;
		while (s[i] && s[i] != sep)
		{
			w_len++;
			i++;
		}
		tab[w_y] = ft_substr(s, start, w_len);
		if (!tab[w_y])
			free_all(tab, i);
		w_y++;
	}
	return (tab[w_y] = 0, tab);
}

char	**ft_split(char const *s, char c)
{
	int		wc;
	char	**res;

	wc = count_words(s, c);
	res = malloc(sizeof(char *) * (wc + 1));
	if (!res)
		return (NULL);
	res = place_words(s, c, res, wc);
	return (res);
}

/*int main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	char **tab = ft_split(argv[1], argv[2][0]);
	for (int i = 0, tab[i], i++)
		printf("%s\n", tab[i]);
	return (0);
}*/