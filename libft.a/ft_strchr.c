/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:52:36 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/10/10 17:53:59 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Verifica a ultima occorencia de um caracter dentro de uma string
char	*ft_strchr(const char *s, int c)
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
		return ((char *) s);

	return (NULL); //temos que fazer essa conversao para que o compilador aceite de const char * para char *
}
