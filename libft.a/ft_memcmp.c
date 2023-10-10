/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:39:22 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/10/10 17:46:53 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned	char *ptr1 = s1;
	const unsigned	char *ptr2 = s2;

	i = 0;
	while (i < n)
	{
		if (ptr1[i] < ptr2[i])
		{
			return (-1);
		}
		else if (ptr1[i] > ptr2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
