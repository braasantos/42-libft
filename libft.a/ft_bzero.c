/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:36:09 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/10/06 18:36:30 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*int main(void)
{
  char test1[] = "this is a string";
  ft_bzero(test1, sizeof(test1) - 1);
  printf("After ft_bzero: %s\n", test1);
  return 0;
}*/
