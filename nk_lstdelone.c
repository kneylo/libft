#include "libft.h"

void    nk_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst)
        return ;
    del (lst->content);
    free(lst);
}


/*void del (void *content)
{
    free(content);
}

int main(void)
{
    t_list *head = nk_lstnew(nk_strdup("Hello")); //strdup to have the string allocated and no problem when freeing
    t_list *new = nk_lstnew(nk_strdup("World"));
    t_list *back = nk_lstnew(nk_strdup("!"));
    t_list *ptr = head;
    nk_lstadd_back(&head, new);
    nk_lstadd_back(&head, back);
    while (ptr != NULL)
    {
        printf("%s ", (char *)ptr->content);
        ptr = ptr->next;
    }
    printf("\n");
    ptr = head;
    t_list *tmp = head->next;
    head->next = tmp->next;
    nk_lstdelone(tmp, del);
    while (ptr != NULL)
    {
        printf("%s ", (char *)ptr->content);
        ptr = ptr->next;
    }
    printf("\n");
    return(0);
}*/