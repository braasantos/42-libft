#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  char *mal;
  int s_len;
  int i;
  s_len = ft_strlen(s);

  if (s == NULL)
    return (NULL);
  if (start > s_len)
    len = 0; // len = 0 para indicar que nao vamos opiar nenhum caracter 
  if ( len > s_len - start)
  // Se o valor de len for maior do que a quantidade de caracteres disponÃ­veis apÃ³s
    // a posicao de inicio (start), reduzimos len para evitar copiar mais do que o
    // disponÃ­vel.
  {
    len = s_len - start;
  }
  mal = (char *)malloc((len + 1) * sizeof(char));
  if (!mal)
    return (NULL);
  i = 0;
  while (i < len)
  {
    mal[i] = s[start + i];
    i++;
  }
  mal[i] = '\0'; 
  return (mal);
}