#include "libft.h"

static int get_size(int n) // verifica quantos numeros temos 
{
  int i;
  i = 0;
  if (n <= 0)
  {
    i++;
    n = -n;
  }
  while (n != 0)
  {
    n = n / 10;
    i++;
  }
  return (i);
}

static void ft_invert(int size, int n, char *ptr, int helper) // escreve de tras para frente
{
  while (helper < size--)
  {
    ptr[size] = n % 10 + '0';
    n = n / 10;
  }
}

char *ft_itoa(int n)
{
  char *ptr;
  int size;
  int helper;
  helper = 0;
  size = get_size(n);
  ptr = (char *)malloc((size + 1) * sizeof(char));
  if (!ptr)
    return (NULL);
  if (n ==  -2147483648)
  {
    ptr[0] = '-';
    ptr[1] = '2';
    n = 147483648;
    helper = 2; // vai ajudar a saber quantos carcteres ja n podem ser preenchidos
  }
  if (n < 0)
  {
    ptr[0] = '-';
    n = -n;
    helper = 1;
  }
  ft_invert(size, n, ptr, helper);
  ptr[size] = '\0';
  return (ptr);
}
int main()
{
	int	i = 0;
	int	j = -2147483648;
	printf("%s\n",ft_itoa(i));
}