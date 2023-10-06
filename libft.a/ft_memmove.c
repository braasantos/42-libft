/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:41:24 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/10/06 18:54:21 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char		*ptr1;
	const unsigned char	*ptr2;
	unsigned char		temp;

	ptr1 = dest;
	ptr2 = src;
	i = 0;
	if (!ptr1 && !ptr2) // veerifica se são nulos 
	{
		return (ptr1);
	}
	if (ptr1 > ptr2) // serve para ver se o dest está depois da src
	{
		while (i < n)
		{
			ptr1[n - 1]= ptr2[n - 1];
			n--; // copia a data ao contrario para evitar escrever por cima
		}
	}
		else 
		{
			while (i < n)
			{
				ptr1[i] = ptr2[i];
				i++;
			}
		}
	return (dest);
}

/*int main() {
    char source[] = "Hello, World!";
    char destination[20];  // Make sure there's enough space for the copy

    // Test copying forward (no overlap)
    ft_memmove(destination, source, 6);
    printf("After ft_memmove (forward): %s\n", destination);

    // Test copying backward (with overlap)
    //ft_memmove(destination + 7, destination, 7);
    //printf("After ft_memmove (backward): %s\n", destination);
		
		//memmove(destination, source, 6);
		//printf("%s\n", destination);
    return 0;
}*/
