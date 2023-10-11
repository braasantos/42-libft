#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
  if (!lst)
    return (NULL);
  else
  {
    while (lst->next != NULL)
    {
      lst = lst->next;
    }
  }
  return (lst)
}