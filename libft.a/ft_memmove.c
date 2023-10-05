#include "libft.h"

void *ft_memmove(void *dest, const void *src , size_t n)
{
  size_t i;
	unsigned char *ptr1 = dest;
	const unsigned char *ptr2 = src;
	i = 0;
	if (!ptr1 && !ptr2) // veerifica se são nulos 
	{
		return (ptr1);
	}
	if (ptr1 == ptr2) //If ptr1 and ptr2 point to the same location
	{
		return (ptr1);
	}
	if (ptr1 > ptr2) // serve para ver se o dest está depois da src
	{
		while (i < n)
		{
			ptr1[i+n-1] = ptr2[i+n-1];
			n--; // copia a data ao contrario para evitar escrever por cima
		}
	}
		else 
		{
			while (i < n)
			{
				ptr1[i] = ptr2[i];
				n--;
				i++;
			}
		}
	return (ptr1);
}

int main() {
    char source[] = "Hello, World!";
    char destination[20];  // Make sure there's enough space for the copy

    // Test copying forward (no overlap)
    ft_memmove(destination, source, 6);
    printf("After ft_memmove (forward): %s\n", destination);

    // Test copying backward (with overlap)
    //ft_memmove(destination + 7, destination, 7);
    //printf("After ft_memmove (backward): %s\n", destination);
		
		//memmove(destination, source, 6);
		//printf("%s ----- %s\n", destination, source);
    return 0;
}
