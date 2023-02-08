NAME = so_long

CC = @CC

CFLAGS = -Wall -Wextra -Werror

MINILIBX = -lmlx -framework OpenGL -framework AppKit -lz

SRC = main.c ./gnl/gnl.c ./gnl/gnl_utils.c ./split/ft_split.c ./split/ft_substr.c map_valide.c map.c utils.c initialization.c draw_game.c player.c gameplay.c exit.c valid_path.c \
		./ft_printf/ft_putchar.c ./ft_printf/ft_putnbr.c ./ft_printf/ft_putstr.c ./ft_printf/ft_printf_Hex.c ./ft_printf/ft_putvp.c ./ft_printf/ft_putunbr.c ./ft_printf/ft_printf_spec.c ./ft_printf/ft_printf.c ./ft_printf/ft_printfhex.c check.c

OBJS = $(SRC:.c=.o)

C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(MINILIBX) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "$(C_GREEN)[so_long CREATED]$(C_RES)"

bonus: $(OBJSBS)

$(OBJSBS) : $(BONUS)
		$(CC) $(CFLAGS) -c $(BONUS)
		$(NAME) $(OBJSBS)
		@echo "$(C_L_BLUE)[so_long CREATED WITH BONUS]$(C_RES)"

clean: 
		@rm -rf $(OBJS) $(OBJSBS)
		@echo "$(C_RED)[OBJECTS REMOVED]$(C_RES)"

fclean: clean
		@rm -rf $(NAME)
		@echo "$(C_RED)[so_long REMOVED]$(C_RES)"

re : fclean all

