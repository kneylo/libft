/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 19:31:57 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/25 23:38:19 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del (lst->content);
	free(lst);
}

/*void	del_content(void *content)
{
	printf("Del--> %s\n", (char *)content);
	free(content);
}

void	print_list(t_list *head)
{
	t_list	*actual;

	actual = head;
	while (actual)
	{
		printf("%s -> ", (char *)actual->content);
		actual = actual->next;
	}
	printf("NULL\n");
}

int	main(int argc, char **argv)
{
	t_list	*nod;

	if (argc != 2)
		return (1);
	nod = ft_lstnew(ft_strdup(argv[1]));
	printf("nod content: %s, nod &: %p\n", (char *)nod->content, nod);
	ft_lstdelone(nod, del_content);
	return (0);
}*/