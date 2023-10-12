/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjorge-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:47:30 by bjorge-m          #+#    #+#             */
/*   Updated: 2023/10/12 13:50:35 by bjorge-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n == 0 && s1 == NULL)
		return (NULL);
	if (!*s2)
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j < n))
		{
			if (s2[j + 1] == '\0')
			{
				return ((char *)(s1 + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
    char *haystack = "i am batman and im the shadows";
    char *needle = "b";
    char *location;
    char *loca;

    location = strstr(haystack,needle);
    if(location == NULL)
        puts("Unable to find string with strstr().");
    else
        printf("strstr() found '%s' in '%s'.\n",
            needle,
            haystack);
    loca = ft_strstr(haystack,needle, 10);
    if(loca == NULL)
        puts("Unable to find string with strstr().");
    else
        printf("strstr() found '%s' in '%s'.\n",
            needle,
            haystack);

    return(0);
}*/
