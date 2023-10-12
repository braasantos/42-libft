#include "libft.h"

int ft_lstsize(t_list *lst)
{
  int i; // se der erro mudar para size_t
  i = 0;
  while (lst)
  {
    lst = lst->next;
    i++;
  }
  return (i;)
}