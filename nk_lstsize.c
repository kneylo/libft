#include "libft.h"

int     nk_lstsize(t_list *lst)
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
    t_list *head = nk_lstnew("world");
    t_list *new = nk_lstnew("hello");
    int size = 0;
    nk_lstadd_front(&head, new);
    size = nk_lstsize(new);
    printf("%d\n", size);
    return(0);
}*/