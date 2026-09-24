/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:51:36 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/24 18:17:59 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

/*void	print_list(t_list *head)
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
	nod1 = ft_lstnew(argv[3]);
	nod2 = ft_lstnew(argv[2]);
	nod3 = ft_lstnew(argv[1]);
	nod4 = ft_lstnew(argv[4]);
	ft_lstadd_front(&head, nod1);
	ft_lstadd_front(&head, nod2);
	ft_lstadd_front(&head, nod3);
	print_list(head);
	printf("lstsize: %d\n", ft_lstsize(head));
	printf("last node: %s\n", (char *)ft_lstlast(head)->content);
	ft_lstadd_back(&head, nod4);
	printf("last node after lstaddback: %s\n",
	(char *)ft_lstlast(head)->content);
	return (0);
}*/