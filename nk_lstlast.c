#include "libft.h"

t_list *nk_lstlast(t_list *lst)
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
    t_list *head = nk_lstnew("World");
    t_list *new = nk_lstnew("Hello");
    head->next = new;
    printf("%s\n", (char *)nk_lstlast(head)->content);
    return(0);
}*/