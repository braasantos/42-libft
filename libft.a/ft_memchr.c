#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
  size_t i;
  unsigned char *str;
  unsigned char ch;

  i = 0;
  str = (unsigned char *) s;
  ch = (unsigned char) c; 
  while (i < n)
  {
    if (str[i] == ch)
    {
      return (str + i); // i tem o valor do index que foi encontrado logo devolvemos o pointer + a posicao dele 
    }
    i++;
  }
  return (NULL);
}

/*int main () 
{
  const char str[] = "braulio.tm.com.fome..";
  const char ch = '.';
  char *ret;
  char *b;
  
  ret = memchr(str, ch, strlen(str));
  b =  memchr(str, ch, strlen(str));
  printf("String after |%c| is - |%s|\n", ch, ret);
  printf("String after |%c| is - |%s|\n", ch, ret);
  return(0);
}*/