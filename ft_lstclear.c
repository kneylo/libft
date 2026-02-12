#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    while ((*lst) != NULL)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = tmp;
    }
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
    ft_lstclear(&new, del);
    if (new == NULL)
    {
        printf("clear done except the first one\n");
        printf("first one: %s\n", (char *)head->content);
        return(0);
    }
    else
        printf("problem somewhere\n");
    return(0);
}*/