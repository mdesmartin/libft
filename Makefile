# ------------------------------- VARIABLES ---------------------------------- #

NAME = libft.a
HEADER = libft.h

CC = gcc
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = rc

DIR_SRC =	sources/

LST_SRC = 	ft_atoi.c			\
			ft_atoi_long.c		\
			ft_bzero.c			\
			ft_calloc.c			\
			ft_free_tab.c		\
			get_next_line.c		\
			ft_isalpha.c		\
			ft_isalnum.c		\
			ft_isascii.c		\
			ft_isdigit.c		\
			ft_isprint.c		\
			ft_itoa.c			\
			ft_lstadd_back.c	\
			ft_lstadd_front.c	\
			ft_lstclear.c		\
			ft_lstdelone.c		\
			ft_lstiter.c		\
			ft_lstlast.c		\
			ft_lstmap.c			\
			ft_lstnew.c			\
			ft_lstsize.c		\
			ft_memchr.c			\
			ft_memcmp.c			\
			ft_memcpy.c			\
			ft_memmove.c		\
			ft_memset.c			\
			ft_printf.c			\
			ft_printf_utils.c	\
			ft_putchar_fd.c		\
			ft_putendl_fd.c		\
			ft_putnbr_fd.c		\
			ft_putstr_fd.c		\
			ft_realloc.c		\
			ft_split.c			\
			ft_strchr.c			\
			ft_strdup.c			\
			ft_striteri.c		\
			ft_strjoin.c		\
			ft_strlcpy.c		\
			ft_strlen.c			\
			ft_strlcat.c		\
			ft_strmapi.c		\
			ft_strnstr.c		\
			ft_strncmp.c		\
			ft_strrchr.c		\
			ft_substr.c			\
			ft_strtrim.c		\
			ft_tolower.c		\
			ft_toupper.c


SOURCES	=	$(addprefix $(DIR_SRC), $(LST_SRC))

DIR_OBJ	=	objects/
OBJECTS = 	$(patsubst $(DIR_SRC)%.c, $(DIR_OBJ)%.o, $(SOURCES))

# ------------------------------- COMPILE ------------------------------------ #

all: $(NAME)

$(NAME): $(DIR_OBJ) $(OBJECTS)
	$(AR) $(ARFLAGS) $(NAME) $(NAME)

$(DIR_OBJ)%.o: $(DIR_SRC)%.c Makefile $(HEADER)
	cc $(CFLAGS) -o $@ -c $<

$(DIR_OBJ)	:
	@mkdir -p $(DIR_OBJ)

# ------------------------------- CLEAN -------------------------------------- #

clean:
	@rm -rf $(DIR_OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
