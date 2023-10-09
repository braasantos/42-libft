#include "libft.h"

static int ft_countsep(char const *s, char c)
{
  int i;
  i = 0;
  while (s[i] != '\0')
  {
    if (s[i] == c)
      s++;
    if (s[i] != '\0')
      i++;
    while (*s && *s != c)
      s++;
  }
  return (i);
}

int main()
{
  printf("%d",ft_countsep("   ^^^^^awdasd^wdasd^^^wda^dwa",'^'));
}