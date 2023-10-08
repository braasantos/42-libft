#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
  size_t i;
  char *mlc;
  size_t str_len;
  size_t j;
  if (!s1)
  {
    return (NULL);
  }
  str_len = ft_strlen(s1);
  mlc = (char *)malloc((str_len + 1) * sizeof(char));
  if (!mlc)
    return (NULL);
    i = 0;
    j = 0;
  while (s1[i])
  {
    if (!ft_strchr(set, s1[i]))
    {
      mlc[j] = s1[i];
      j++;
    }
    i++;
  }
  mlc[j] = '\0';
  return (mlc);
}

/*int main() {
    const char *original = "   Hell   o, world!           ";
    const char *set = " \t"; // Caracteres de preenchimento: espaço e tabulação

    char *trimmed = ft_strtrim(original, set);

    printf("String original: \"%s\"\n", original);
    printf("String após strtrim: \"%s\"\n", trimmed);

    free(trimmed); // Não esqueça de liberar a memória alocada

    return 0;
}*/