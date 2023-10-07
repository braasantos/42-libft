#include "libft.h"

char	*ft_strdup(const char *s)
{
  int		len;
  int		i;
  char	*b;

  len = ft_strlen(s);
  b = (char *)malloc ((len + 1) * sizeof(char));
  if (!b)
    return (NULL);
  i = 0;
  while (s[i])
  {
    b[i] = s[i];
    i++;
  }
  b[i] = '\0';
  return (b);
}

/*int	main(void)
{
        char	a[] = "braulio";
  printf("Duplicate str: %s", ft_strdup(a));
  return (0);
}*/