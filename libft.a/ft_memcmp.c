#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
  size_t i;
  const unsigned char *ptr1 = s1;
  const unsigned char *ptr2 = s2; 
  i = 0;
  /*if (ft_toupper(ptr1))
  {
    return (ft_toupper(ptr1));
  }
  if (ft_toupper(ptr2))
  {
    return (ft_toupper(ptr2));
  }*/
  while (i < n)
  {
    if (ptr1[i] < ptr2[i])
    {
      return (-1);
    }
    else if (ptr1[i] > ptr2[i])
    {
      return (1);
    }
    i++;
  }
  return (0);
}