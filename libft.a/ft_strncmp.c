/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:46:36 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/10/06 18:47:13 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	i = 0;
	if (i == n) //se n for igual a zero significa que nao ha nada para comparar
	{
		return (0);
	}
	while ((s1[i] == s2[i]) && i < n - 1 && s1[i]) // 1- verifica se as posicoes que estao sao iguais / 2- que compararemos ate ao nulo e que ainda nao atingimos o final da s1
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]); //unsigned char para garantir que a difrenca seja interpretada correctamente
}


/*int main() {
    const char *str1 = "apple";
    const char *str2 = "apple";

    printf("%i\n",ft_strncmp(str1, str2, 3));
    return 0;
}

 int main()
 {
 	char *s1 = "\200";
 	char *s2 = "\0";

 	printf("%d\n", ft_strncmp(s1, s2, 6));
 	printf("%d", strncmp(s1, s2, 6));
 }*/
