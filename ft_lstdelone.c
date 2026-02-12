#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void*))
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
    t_list *head = ft_lstnew(ft_strdup("Hello")); //strdup to have the string allocated and no problem when freeing
    t_list *new = ft_lstnew(ft_strdup("World"));
    t_list *back = ft_lstnew(ft_strdup("!"));
    t_list *ptr = head;
    ft_lstadd_back(&head, new);
    ft_lstadd_back(&head, back);
    while (ptr != NULL)
    {
        printf("%s ", (char *)ptr->content);
        ptr = ptr->next;
    }
    printf("\n");
    ptr = head;
    t_list *tmp = head->next;
    head->next = tmp->next;
    ft_lstdelone(tmp, del);
    while (ptr != NULL)
    {
        printf("%s ", (char *)ptr->content);
        ptr = ptr->next;
    }
    printf("\n");
    return(0);
}*/