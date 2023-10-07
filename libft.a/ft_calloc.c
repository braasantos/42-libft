#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
  char *b;
  b = (char)malloc((ft_strlen(count) + 1) * sizeof(size_t));
  if (count == 0 || size == 0 || !b) return (NULL);

}