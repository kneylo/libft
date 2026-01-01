#include "libft.h"

void *nk_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = malloc(count * size);
    if (!ptr)
        return(NULL);
    nk_bzero(ptr, count * size);
    return(ptr);
}

/*int main(void)
{
    int *tab;
    size_t i;
    tab =nk_calloc(5, sizeof(int));
    if(!tab)
    {
        printf("Allocation failed.");
        return(1);
    }

    i = 0;
    while (i < 5)
    {
        printf("%d", tab[i]);
        i++;
    }
    printf("\n");
    free(tab);
    return(0);
}*/