NAME = libft.a

SRCS_P1 = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c	\
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c

SRCS_P2 = ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_strtrimm.c \
	ft_itoa.c	\
	ft_strmapi.c \
	ft_striteri.c 
#ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c



SRC = 	$(SRCS_P1) \
		$(SRCS_P2)

CC = cc
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rcs

OBJS_DIR = objs/
OBJS = $(SRC:%.c=$(OBJS_DIR)%.o)
#OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
#OBJECTS_PREFIXED = $(patsubst %.o, $(OBJS_DIR)%.o, $(notdir $(OBJS)))

.PHONY: all clean fclean re main run

all: $(NAME)

$(OBJS_DIR)%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar $(ARFLAGS) $(NAME) $(OBJS)
	@echo "Libft Done !"

clean:
	rm -rf $(OBJS_DIR)
	rm -f $(SRCS_P1:%.c=%.o)

fclean: clean
	rm -f $(NAME) program

re: fclean all

main: all
	$(CC) $(CFLAGS) main.c -o program -L. -lft

run: main
	./program
