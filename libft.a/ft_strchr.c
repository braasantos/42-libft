#include "libft.h"
//Verifica a ultima occorencia de um caracter dentro de uma string
char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return((char *) s); //atribuimos esse endereço ao ptr 
		}
		s++;
	}
	if ((char)c == *s)
		return (char *)s;

	return (NULL); //temos que fazer essa conversao para que o compilador aceite de const char * para char *
}
