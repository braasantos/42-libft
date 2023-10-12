#include "libft.h"

t_list *ft_lstnew(void *content)
{
  t_list *new;
  new = (t_list *)malloc(sizeof(t_list));
  if (!new)
    return (NULL);
  new->content = content;
  new->next = NULL;
  return (new);
}

/*int main(void)
{
  t_list *add;
  t_list * add2;
  add = ft_lstnew("braulio");
  add2 = ft_lstnew("nicole");
  add->next = add2;
}*/