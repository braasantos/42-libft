#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	size_t	d_len = ft_strlen(dest);
	size_t	s_len = ft_strlen(src);
	i = d_len;
	j = 0; 
	if (d_len >= size)
	return (size + s_len);
  while (src[j] && j < size - 1 - d_len)
  {
    dest[j + i] = src[j];
    j++;
  }
	dest[j + i] ='\0';
	return (d_len + s_len);
}

/*int main(void)
{
    char s1[22] = "Hello";
    char s2[] = "World!";

 printf("%zu", ft_strlcat(s1, s2, 6));
//printf("strlcat :: %s :: %zu :: sizeof %lu\n", s1, strlcat(s1, s2, sizeof(s1)), sizeof(s1));
}*/