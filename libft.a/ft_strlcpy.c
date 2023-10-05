#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
  int i;
  i = 0;
  while (src[i] && i < size - 1)
  {
    dst[i] = src[i];
    i++;
  }
  if (i < size)
    dst[i] = '\0';
  else if (size > 0)
    dst[size - 1] = '\0';
  return (i);
}
/*int main(void)
{
  char dest[10];
  char src[] = "braulio";
  unsigned int size = 4;
  printf("%zu\n", ft_strlcpy(dest, src, size));
  return (0);
}*/
