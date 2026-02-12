#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst)
        return ;
    while(lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}


/*void f(void *content)
{
    printf("%s ", (char *)content);
}

int main(void)
{
    t_list *head = ft_lstnew(ft_strdup("Hello")); //strdup to have the string allocated and no problem when freeing
    t_list *new = ft_lstnew(ft_strdup("World"));
    t_list *back = ft_lstnew(ft_strdup("!"));
    ft_lstadd_back(&head, new);
    ft_lstadd_back(&head, back);
    ft_lstiter(head, f);
    return(0);
}*/