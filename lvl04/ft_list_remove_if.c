#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{

    if(begin_list == NULL || *begin_list == NULL)
        return ;

    t_list *lst;

    lst = *begin_list;

    if(cmp(lst->data, data_ref) == 0)
    {
        *begin_list = lst->next;
        free(lst);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    lst = *begin_list;
    ft_list_remove_if(&lst->next, data_ref, cmp);
}