#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
  void *b;
  b = malloc(count * size);
  if (!b) 
    return (NULL);
  else 
    ft_bzero(b, count * size);
  return (b);
}