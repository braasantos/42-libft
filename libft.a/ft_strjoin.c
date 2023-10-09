#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  size_t s1_len;
  size_t s2_len;

  char *mal;
  if (!s1 || !s2)
    return (NULL);
  s1_len = ft_strlen(s1);
  s2_len = ft_strlen(s2);
  mal = (char *)malloc((s1_len + s2_len + 1) *sizeof(char));
  if (!mal)
    return (NULL);
  else 
  {
    /*s3 = s1;
    s3[s1_len] += s2;
    s3[s1_len + s2_len] = '\0';
    mal = s3;*/
    ft_strlcpy(mal, s1, s1_len + 1); // verificar o porque o 1 se nao queremos alocar o nulo duas vezes 
    ft_strlcat(mal, s2, s1_len + s2_len + 1);
    mal[s1_len + s2_len] = '\0';
    return (mal);
  }
}

/*int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *result = ft_strjoin(s1, s2);

    printf("%li\n", ft_strlen(result));
    return 0;
}*/