/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 15:08:10 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/24 18:21:55 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*actual;
	unsigned int	res;

	actual = lst;
	res = 0;
	if (!lst)
		return (0);
	while (actual)
	{
		actual = actual->next;
		res++;
	}
	return (res);
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
	printf("%d\n", ft_lstsize(head));
	return (0);
}*/