##VARIAVEIS
NAME = libft.a

SRCS = ft_isdigit.c \
	ft_strlen.c \
	ft_isalpha.c \
	ft_isascii.c \
 	ft_isprint.c \
 	ft_isalnum.c \
 	ft_toupper.c \
 	ft_tolower.c \
 	ft_atoi.c \
 	ft_strncmp.c \
 	ft_strlcat.c\
	ft_memset.c \
	ft_memmove.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memchr.c \
	ft_strlcpy.c \
	ft_bzero.c \
	ft_strrchr.c \
	ft_strchr.c \
	ft_strnstr.c \
	ft_strdup.c \
	ft_strmapi.c \
	ft_calloc.c \
	ft_itoa.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	t_list *ft_lstnew.c \
	void ft_lstadd_front.c
	int ft_lstsize.c \
	t_list *ft_lstlast.c \
	void ft_lstadd_back. c\
	void ft_lstdelone.c \
	void ft_lstclear.c \
	void ft_lstiter.c \
	t_list *ft_lstmap.c \


OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra 

COMPLIER = $(CC) $(CFLAGS)

RM = rm -f

##$(NAME): $(OBJS)
##	$(COMPLIER) main.c $(OBJS)
%.o : %.c 
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	cc main.c $(NAME)

bonus: $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SILENT: