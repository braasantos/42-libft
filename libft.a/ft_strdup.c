#include "libft.h"

int	ft_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
  {
    i++;
  }
  return (i);
}

char	*ft_strdup(char *str)
{
  int		len;
  int		i;
  char	*b;

  len = ft_strlen(str);
  b = (char *)malloc ((len + 1) * sizeof(char));
  i = 0;
  while (str[i])
  {
    b[i] = str[i];
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