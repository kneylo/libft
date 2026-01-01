#include "libft.h"

void nk_lstadd_back(t_list **lst, t_list *new)
{   
    t_list *back;

    if (!(*lst))
    {
        *lst = new;
        return ;
    }
    back = nk_lstlast(*lst);
    back->next = new;
}

/*int main(void)
{
    t_list *head = nk_lstnew("World");
    t_list *new = nk_lstnew("Hello");
    t_list *back = nk_lstnew("!");
    nk_lstadd_front(&head, new);
    nk_lstadd_back(&head, back);
    printf("%s->%s->%s\n", (char *)head->content, (char *)head->next->content, (char *)head->next->next->content);
    return(0);
}*/