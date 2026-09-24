/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 15:25:21 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/17 18:15:34 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*actual;

	if (!lst)
		return (NULL);
	actual = lst;
	while (actual->next != NULL)
		actual = actual->next;
	return (actual);
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

	if (argc != 4)
		return (1);
	head = NULL;
	nod1 = ft_lstnew(argv[1]);
	nod2 = ft_lstnew(argv[2]);
	nod3 = ft_lstnew(argv[3]);
	ft_lstadd_front(&head, nod3);
	ft_lstadd_front(&head, nod2);
	ft_lstadd_front(&head, nod1);
	print_list(head);
	printf("lstsize: %d\n", ft_lstsize(head));
	printf("last node: %s\n", (char *)ft_lstlast(head)->content);
	return (0);
}*/