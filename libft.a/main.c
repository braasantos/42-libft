#include "libft.h"

int main(void)
{
  char a = '2';
  char b[] = "im b";
  char n[] = "im b";
  char c = 'd';
  char h = '*';
  char *j = "-45";
  char m[] = "Braulio";
  char l[] = "Santos";
  unsigned int z = 4;
  printf("%li\n", ft_strlcat(m, l, z));
  printf("ATOI : %i\n", ft_atoi(j));
  printf("%d\n", ft_isalnum(h));
  printf("%i\n", ft_isprint(a));
  printf("%i\n", ft_isascii(a));
  printf("%i\n", ft_isalpha(a));
  printf("%d\n", ft_toupper(c));
  printf("%d\n", ft_tolower(c));
  printf("%i\n", ft_isdigit(a));
  printf("%li\n", ft_strlen(b));
  printf("%i\n", ft_strncmp(b, n, z));
  return (0);
}