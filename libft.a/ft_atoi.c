#include "libft.h"

int ft_atoi(const char *str)
{
  int i = 0;
  int sign = 1;
  int som = 0;
  while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
  {
     i++;
  }
  while (str[i])
  {
    if (str[i] == 45 || str[i] == 43)
    {
      if (str[i] == 45)
      {
        sign *= -1;
        }
        i++;
  }
  if (str[i] >= 48 && str[i] <= 57)
  {
    som = som * 10 + str[i] - '0';
  }
  i++;
  }
  if (sign > 2) return (0);
  return (som * sign);
}