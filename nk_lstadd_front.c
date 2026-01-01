#include "libft.h"

void nk_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return;
    new->next = *lst; //le nouveau maillon pointe sur l'ancien
    *lst = new; // la tete de la liste devient le nouveau maillon
}

/*int main(void)
{
    t_list *head = nk_lstnew("World");
    t_list *new = nk_lstnew("Hello");
    printf("%s, %s\n", (char *)head->content, (char *)new->content);
    nk_lstadd_front(&head, new);
    printf("%s -> %s\n", (char *)head->content, (char *)head->next->content); 
    return(0);
}*/