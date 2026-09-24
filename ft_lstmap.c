/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 20:40:48 by nkreter           #+#    #+#             */
/*   Updated: 2026/09/24 18:18:36 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new_node);
		lst = lst->next;
	}
	return (res);
}

/*void	*f(void *s)
{
	size_t	i;
	unsigned char *res;

	i = 0;
	res = (unsigned char *)ft_strdup(s);
	while (res[i])
	{
		res[i] = ft_toupper(((unsigned char *)s)[i]);
		i++;
	}
	return (res);
}

void	del(void *content)
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
	t_list	*new_list;

	if (argc != 4)
		return (1);
	head = NULL;
	nod1 = ft_lstnew(ft_strdup(argv[1]));
	nod2 = ft_lstnew(ft_strdup(argv[2]));
	nod3 = ft_lstnew(ft_strdup(argv[3]));
	new_list = NULL;	
	ft_lstadd_back(&head, nod1);
	ft_lstadd_back(&head, nod2);
	ft_lstadd_back(&head, nod3);
	printf("lstsize: %d\n", ft_lstsize(head));
	print_list(head);
	new_list = ft_lstmap(head, f, del);
	printf("lstsize: %d\n", ft_lstsize(new_list));
	print_list(new_list);
	return (0);
}*/