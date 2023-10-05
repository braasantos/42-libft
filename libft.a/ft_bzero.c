#include "libft.h"

void ft_bzero(void *s, size_t n)
{
  ft_memset(s, '\0', n);
  //printf("%p\n", s);
}

int main(void)
{
  char test1[] = "this is a string";
  ft_bzero(test1, sizeof(test1) - 1);
  printf("After ft_bzero: %s\n", test1);
  return 0;
}