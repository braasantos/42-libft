/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:47:26 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/10/06 18:48:19 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Verifica a ultima occorencia de um caracter dentro de uma string
char *ft_strrchr(const char *s, int c)
{
	const char *ptr;
	
	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			ptr = s; //atribuimos esse endereço ao ptr 
		}
		s++;
	}
	if ((char)c == *s)
		return (char *)s; // Handle null terminator if 'c' is '\0'
  /*if (ptr == NULL)
  {
    return (NULL);
  }*/
	else
		return ((char *)ptr); //temos que fazer essa conversao para que o compilador aceite de const char * para char *
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

/*int main(void)
{
  const char *str = "braulio";
  int c = '\0';
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
}*/
