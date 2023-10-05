#include "libft.h"
//Verifica a ultima occorencia de um caracter dentro de uma string
char *ft_strrchr(const char *str, int c)
{
  int i;
  const char *ptr;

  i = 0;
  ptr = NULL;
  while (str[i])
  {
    if (str[i] == c)
    {
      ptr = &str[i]; //atribuimos esse endereço ao ptr 
    }
    i++;
  }
  return (char *)ptr; //temos que fazer essa conversao para que o compilador aceite de const char * para char *
}

/*int main(void)
{
  const char *str = "braulio";
  int c = 'b';
  char *result = ft_strrchr(str, c);
  if (result != NULL)
    printf("%s\n", result);
  else
    printf("not found\n");
  return (0);
}*/

int main(void)
{
  const char *str = "brauliobdossantsosb";
  int c = 'b';
  char *result = ft_strrchr(str, c);
  if (result != NULL)
  {
    // calcula e imprime a ultima posição do caracter
    int position = result - str;
    printf("Found at position %d\n", position);
  }
  else
  {
    printf("Not found\n");
  }
  return (0);
}
