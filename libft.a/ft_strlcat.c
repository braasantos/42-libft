#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
  size_t i;
  size_t j;

  size_t d_len = ft_strlen(dest);
  size_t s_len = ft_strlen(src);
  i = d_len;
  j = 0;
  if (d_len < size - 1 && size > 0)
  {
    while (src[j] && d_len + j < size - 1)
    {
      dest[i] = src[j];
      i++;
      j++;
    }
    dest[j] ='\0';
  }
  if (d_len >= size)
		d_len = size;
	return (d_len + s_len);
}