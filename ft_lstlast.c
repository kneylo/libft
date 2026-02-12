#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return(NULL);
    while (lst->next != NULL)
    {
        lst = lst->next;
    }
    return(lst);
}

/*int main(void)
{
    t_list *head = ft_lstnew("World");
    t_list *new = ft_lstnew("Hello");
    head->next = new;
    printf("%s\n", (char *)ft_lstlast(head)->content);
    return(0);
}*/