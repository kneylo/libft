#include "libft.h"

void    nk_lstiter(t_list *lst, void (*f)(void *))
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
    t_list *head = nk_lstnew(nk_strdup("Hello")); //strdup to have the string allocated and no problem when freeing
    t_list *new = nk_lstnew(nk_strdup("World"));
    t_list *back = nk_lstnew(nk_strdup("!"));
    nk_lstadd_back(&head, new);
    nk_lstadd_back(&head, back);
    nk_lstiter(head, f);
    return(0);
}*/