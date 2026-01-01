#include "libft.h"

void    nk_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    while ((*lst) != NULL)
    {
        tmp = (*lst)->next;
        nk_lstdelone(*lst, del);
        *lst = tmp;
    }
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
    nk_lstclear(&new, del);
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