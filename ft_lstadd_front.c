/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 09:29:10 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/24 18:18:27 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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
	t_list *head;
	t_list *nod1;
	
	head = ft_lstnew(argv[1]);
	nod1 = ft_lstnew(argv[2]);
	if (argc != 3)
		return (1);
	print_list(head);
	ft_lstadd_front(&head, nod1);
	print_list(head);
	return (0);
}*/