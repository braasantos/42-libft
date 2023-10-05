#ifndef FT_H
#define FT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_isdigit(int c);
size_t ft_strlen(const char *s);
int ft_atoi(const char *str);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_strncmp(const char *s1, const char *s2, size_t num);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
char *strrchr(const char *str, int c);
void  *ft_memset(void *str, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memmove(void * destino, const void * fonte , size_t num);
#endif 