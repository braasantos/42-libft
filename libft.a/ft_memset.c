/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:41:51 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/10/06 18:42:33 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	char *ptr = s;
	
	i = 0;
	while(i < n)
	{
		ptr[i] = (char)c;
		i++;
	}
	return (s);
  //printf("%s\n",ptr);
}

/*int main (void)
{
   char str[50];
   char b[50] = "This is string.h library function";
   strcpy(str,"This is string.h library function");
   puts(str); //igual ao printf

   memset(str,'$',7);
   printf("%s\n", str);
   printf("----MY FUNCTION----\n");
   ft_memset(b, '$', 15);
   return(0);
}*/
