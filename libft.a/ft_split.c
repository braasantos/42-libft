#include "libft.h"

static int ft_countword(char const *s, char c)
{
  int flag;
  int count;
  flag = 0;
  count = 0;
  while (*s)
  {
    if (*s == c)
      flag = 0;
    else
    {
      if (!flag)
      {
        count++;
        flag = 1;
      }
    }
    s++;
  }
  //printf("%i\n", count);
  return (count);
}

static char **ft_putwords(char **new, char const *s, char c)
{
  char **newarr;
  int flag;
  int count;
  newarr = new; 
  flag = 0;
  count = 0;
  while (*s)
  {
    if (*s == c)
      flag = 0;
    else
    {
      
      if (!flag)
      {
        newarr[count] = ft_substr(s, 0, ft_strchr(s, c) - s);
        if (!newarr[count])
        {
          while (count >= 0)
          {
              free(newarr[count--]);
              free(newarr);
          }
          return (NULL);
        }
          
        flag = 1;
        count++;
      }
    }
    s++;
  }
  newarr[count] = NULL;
  return (newarr);
}

char **ft_split(char const *s, char c)
{
  char **new_arr;
  int i;
  int count;
  if (!s)
    return (NULL);
  count = ft_countword(s, c);
  new_arr = (char **)malloc((count + 1)* sizeof(char *));
  if (!new_arr)
    return (NULL);
  ft_putwords(new_arr, s, c);
  return (new_arr);
}

int main(void)
{
    char const *s = "isso e um teste para ver se a split funciona";
    char c = ' ';
    
    char **result = ft_split(s, c);
 if (result) {
        for (int i = 0; result[i] != NULL; i++) {
            printf("array : %s\n", result[i]);
            free(result[i]); // Liberar a memória alocada para cada palavra
        }
        free(result); // Liberar a memória alocada para o array de strings
    } else {
        // Trate a falha na alocação de memória aqui
    }

    return 0;
}