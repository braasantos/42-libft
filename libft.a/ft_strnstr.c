#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
  size_t i;
  size_t j;

  i = 0;
  if (n == 0 && s1 == NULL) // se o n for 0  e se o s1 é nulo devolve-se nulo
    return (NULL);
  if (!*s2) // se s2 for nulo entao devolve s1
    return ((char *)s1);
	while (s1[i] && i < n) // verifica se ha elementos na string e que para ate o n de elementos que queremos copiar
	{
    j = 0;
		while (s1[i + j] == s2[j] && (i + j < n)) // verifica se sao iguais 
		{
      if (s2[j + 1] == '\0')
      {
        return ((char *)(s1 + i));
      }
      j++;
		}
    i++; // incrementa o i para andar 
  }
  return (NULL);
}

/*int main()
{
    char *haystack = "i am batman and im the shadows";
    char *needle = "b";
    char *location;
    char *loca;

    location = strstr(haystack,needle);
    if(location == NULL)
        puts("Unable to find string with strstr().");
    else
        printf("strstr() found '%s' in '%s'.\n",
            needle,
            haystack);
    loca = ft_strstr(haystack,needle, 10);
    if(loca == NULL)
        puts("Unable to find string with strstr().");
    else
        printf("strstr() found '%s' in '%s'.\n",
            needle,
            haystack);

    return(0);
}*/