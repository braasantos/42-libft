#include "libft.h"

int ft_toupper(int c)
{
  int b;
  if (c >= 97 && c <= 122)
  {
    b = c - 32;
    return (b);
  }
  return (c);
}
