#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
  size_t i;
  char *mlc;
  size_t str_len;
  size_t j;
  size_t b;
  if (s1 == NULL)
  {
    return (NULL);
  }
  str_len = ft_strlen(s1);
  i = 0;
  while (s1[i] && ft_strchr(set, s1[i]))
    i++; 
  while(str_len > i && ft_strchr(set, s1[str_len - 1]))
    str_len--;
    j = str_len - i; // calcula a nova o tamanho da nova string 
  mlc = (char *)malloc((j + 1) * sizeof(char));
  if (!mlc)
    return (NULL);
  b = 0;
  while (b < j)
  {
    mlc[b] = s1[i];
    b++;
    i++;
  }
  mlc[b] = '\0';
  return (mlc);   
}

/*int main(void)
{
    const char *original = "   Hell   o, world!           ";
    const char *set = " \t"; // Caracteres de preenchimento: espaço e tabulação

    char *trimmed = ft_strtrim(original, set);

    printf("String original: \"%s\"\n", original);
    printf("String após strtrim: \"%s\"\n", trimmed);

    free(trimmed); // Não esqueça de liberar a memória alocada
    return 0;
}*/