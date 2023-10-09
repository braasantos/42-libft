#include "libft.h"

static int ft_countsep(char const *s, char c)
{
  int i;
  i = 0;
  while (s[i] != '\0')
  {
    while (s[i] == c)
      s++;
    if (s[i] != '\0')
      i++;
    while (*s && *s != c)
      s++;
  }
  return (i);
}

static size_t ft_countwords(char **new, char const *s, char c)
{
  char const *word;
  char **newarr;
  word = s;
  newarr = new;
  while (*s)
  {
    while (*s == c)
      s++;
      word = s;
    if (*s && *s != c)
      while (*s && *s != c)
      s++;
    if (word != s)
    {
      *newarr = ft_substr(word, 0, s - word);
      word = s;
      newarr++;
    }
  }
  *newarr = NULL;
}

char **ft_split(char const *s, char c)
{
  char **new_arr;
  int count;
  if (!s)
    return (NULL);
  count = ft_countsep(s, c);
  new_arr = (char **)malloc((count + 1)* sizeof(char *));
  if (!new_arr)
    return (NULL);
  ft_countwords(new_arr, s, c);
  return (new_arr);
}
