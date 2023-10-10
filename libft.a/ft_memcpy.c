/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:40:43 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/10/10 18:09:42 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned	char *ptr;
	const unsigned	char *ptr2;

	ptr = dest;
	ptr2 = src;
/* src and dest pointers are treated as
 	unsigned char pointers to ensure that the 
 	copying works correctly in all cases,
  especially when copying binary data.*/
	i = 0;
	if (!ptr && !ptr2)
		return (0);
	while (i < n)
	{
		ptr[i] = ptr2[i];
		i ++;
	}
	return (dest);
}
/*int main(void)
{
    char src[] = "Hello, World!";
    char dest1[20];
    char dest2[20];

    // Using the original memcpy function
    memcpy(dest1, src, strlen(src) + 1); // +1 for the null terminator
    printf("Original memcpy result: %s\n", dest1);

    // Using your ft_memcpy function
    ft_memcpy(dest2, src, strlen(src) + 1); // +1 for the null terminator
    printf("ft_memcpy result: %s\n", dest2);

    // Check if the results are the same
    if (ft_memcmp(dest1, dest2, sizeof(dest1)) == 0)
    {
        printf("Both results are the same.\n");
    }
    else
    {
        printf("Results are different.\n");
    }
    printf("------------ORIGINAL FUNCTION------\n");
    if (memcmp(dest1, dest2, sizeof(dest1)) == 0)
    {
        printf("Both results are the same.\n");
    }
    else
    {
        printf("Results are different.\n");
    }

    return 0;
}*/
