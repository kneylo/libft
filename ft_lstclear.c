/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 19:52:32 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/24 17:49:28 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*actual;

	while (*lst != NULL)
	{
		actual = *lst;
		*lst = actual->next;
		ft_lstdelone(actual, del);
	}
}

/*void	del_content(void *content)
{
	printf("Del--> %s, p--> %p\n", (char *)content, content);
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
	t_list	*head;
	t_list	*nod1;
	t_list	*nod2;
	t_list	*nod3;
	t_list	*nod4;

	if (argc != 5)
		return (1);
	head = NULL;
	nod1 = ft_lstnew(ft_strdup(argv[3]));
	nod2 = ft_lstnew(ft_strdup(argv[2]));
	nod3 = ft_lstnew(ft_strdup(argv[1]));
	nod4 = ft_lstnew(ft_strdup(argv[4]));
	ft_lstadd_front(&head, nod1);
	ft_lstadd_front(&head, nod2);
	ft_lstadd_front(&head, nod3);
	ft_lstadd_back(&head, nod4);
	printf("lstsize: %d\n", ft_lstsize(head));
	ft_lstclear(&head, del_content);
	if (head == NULL)
		printf("lstclear is good\n");
	else
		printf("lstclear didn't work\n");
	return (0);
}*/