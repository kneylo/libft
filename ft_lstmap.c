#include "libft.h" 

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *res;
    t_list *new_content;
    void *new_element;
    if (!lst || !f || !del)
        return NULL;
    res = NULL;
    while (lst)
    {
        new_content = f(lst->content);
        new_element = ft_lstnew(new_content);
        if (!new_element)
        {
            del(new_element);
            ft_lstclear(&res, del);
            return(res);
        }
        lst = lst->next;
    }
    return(res);
}

/*int main(void)
{

}*/