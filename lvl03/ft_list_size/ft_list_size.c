#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    int i;
    t_list *lst;

    lst = begin_list;
    i = 0;
    while(lst)
    {
        lst = lst->next;
        i++;
    }
    return(i);
}