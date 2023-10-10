/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:44:13 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/10/10 17:45:08 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	i = d_len;
	j = 0;
	if (i >= size || size == 0)/*verifica o tamanho da str destino*/
		return (size + s_len);
	while (src[j] && j < size - 1 - i) // calcula a quantidade maxima de caracteres a adicionar no dest
	{
		/*verifica se ha espaco suficiente para acomodar levando em consideracao o tamanho maximo especificado no size*/
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (d_len + s_len); // devolve o tamanho das duas strings 
	
 }
/*int main(void)
{
    char s1[22] = "Hello";
    char s2[] = "World!";

 printf("%zu", ft_strlcat(s1, s2, 6));
}*/
