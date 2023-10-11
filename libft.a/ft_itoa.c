#include "libft.h"

static int ft_getnbr(int n )
{
  int count;
  count = 0;
  if (n == 0)
    return (1);
  while (n != 0)
  {
    n = n / 10;
    count ++;
  }
  return (count);
}
int ft_negative(int n)
{
  int neg_len;
  if (n < 0)
  {
    neg_len = ft_getnbr(n);
    neg_len++;
  }
  else
  {
    neg_len = ft_getnbr(n);
  }
  return (neg_len);
}
char *ft_convert(int n, char *str)
{
  int i;
  i = ft_negative(n);
  if (n == 0)
    str[i - 1] = n + '0';
  if (n < 0)
  {
    str[0] = '-';
    n = -n;
  }
  while (n != 0 && i != 0)
  {
    i--;
    str[i] = (n % 10) + '0';
    n = n / 10;
  }
  return (str);
}
char *ft_itoa(int n)
{
  char *mlc;
  int len_nbr;
  len_nbr = ft_negative(n);
  mlc = (char *)ft_calloc(((len_nbr + 1)), sizeof(char));
  if (!mlc)
    return (NULL);
  mlc = ft_convert(n, mlc);
  mlc[len_nbr] = '\0';
  return (mlc);
}
int main(void)
{
  int nbr = -345672;
  printf("%s\n", ft_itoa(nbr));
  //printf("%i\n", ft_negative(nbr));
  return (0);
}