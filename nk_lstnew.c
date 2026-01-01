#include "libft.h"

t_list  *nk_lstnew(void *content)
{
    t_list *element;

    element = malloc(sizeof(t_list));
    if (!element)
        return(NULL);
    element->content = content;
    element->next = NULL;
    return(element);
}

/*int main(void)
{
    t_list *head = nk_lstnew("Hello World");
    printf("%s, %p\n", (char *)head->content, &head);
    return(0);
}*/