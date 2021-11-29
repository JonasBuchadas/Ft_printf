CC=			gcc

CFLAGS=		-Wall -Werror -Wextra

NAME=		libftprintf.a

SRCS=		ft_printf.c char_convert.c str_convert.c ptr_convert.c put_percent.c ft_ultoa_base.c dec_convert.c int_convert.c udec_convert.c ft_uitoa.c ft_itoa_base.c low_hex_convert.c

OBJS=		$(SRCS:.c=.o)

LIBFT_DIR=	./libft

LIBFT=		libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/$(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJS)
	@echo "Printf Library Created"

$(OBJS): $(SRCS) 
	@$(CC) $(CFLAGS) -c -I $(LIBFT_DIR) $(SRCS)
	
clean:
	@make clean -C $(LIBFT_DIR)
	@rm -f $(OBJS)
	@echo "Object Files Removed"

fclean: clean
	@rm -f $(LIBFT_DIR)/$(LIBFT)
	@echo "Libft Library Removed"
	@rm -f $(NAME) 
	@echo "Printf Library Removed"

re: fclean all
