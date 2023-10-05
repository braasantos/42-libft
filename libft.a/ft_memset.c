#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
  size_t i;
  char *ptr = str;

  i = 0;
  while(i < n)
  {
    ptr[i] = (char)c;
    i++;
  }
  printf("%s\n",ptr);
}

int main (void)
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
}