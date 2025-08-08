NAME = push_swap

MAKEFLAGS += --no-print-directory

SRC_DIR = src
OBJ_DIR = obj

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

HEADER = push_swap.h

SRC =	$(SRC_DIR)/main.c\
		$(SRC_DIR)/push.c\
		$(SRC_DIR)/swap.c\
		$(SRC_DIR)/sort.c\
		$(SRC_DIR)/error.c\
		$(SRC_DIR)/rotate.c\
		$(SRC_DIR)/parsing.c\
		$(SRC_DIR)/assign_index.c\
		$(SRC_DIR)/rotate_reverse.c

OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re