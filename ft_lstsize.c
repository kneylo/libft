#include "libft.h"

int     ft_lstsize(t_list *lst)
{
    int size;

    size = 0;
    if (!lst)
        return(0);
    while (lst != NULL)
    {  
        lst = lst->next;
        size++;
    }
    return(size);
}

/*int main(void)
{
    t_list *head = ft_lstnew("world");
    t_list *new = ft_lstnew("hello");
    int size = 0;
    ft_lstadd_front(&head, new);
    size = ft_lstsize(new);
    printf("%d\n", size);
    return(0);
}*/