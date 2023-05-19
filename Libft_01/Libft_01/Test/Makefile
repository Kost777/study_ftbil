# Makefile from Libft

# Constants
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

# Variables
SRC_PART1 = ft_isalpha		\
	ft_isascii		\
	ft_isdigit		\
	ft_isprint		\
	ft_strlen		\
	ft_memset

# Creating
OBJS_DIR = objs/
OBJS = $(SRC_PART1:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

$(OBJS_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	ar rcs $(NAME) $(OBJECTS_PREFIXED)
	@echo "Libft Done !"

# Using
all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all


