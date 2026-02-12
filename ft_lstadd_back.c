#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{   
    t_list *back;

    if (!(*lst))
    {
        *lst = new;
        return ;
    }
    back = ft_lstlast(*lst);
    back->next = new;
}

/*int main(void)
{
    t_list *head = ft_lstnew("World");
    t_list *new = ft_lstnew("Hello");
    t_list *back = ft_lstnew("!");
    ft_lstadd_front(&head, new);
    ft_lstadd_back(&head, back);
    printf("%s->%s->%s\n", (char *)head->content, (char *)head->next->content, (char *)head->next->next->content);
    return(0);
}*/