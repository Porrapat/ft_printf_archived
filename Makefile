# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 09:51:37 by ppetchda          #+#    #+#              #
#    Updated: 2022/03/03 10:21:42 by ppetchda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \
		ft_printf_utils_general.c \
		ft_printf_utils_unsigned.c \
		ft_printf_utils_hex.c \
		ft_printf_utils_ptr.c

OBJS = $(SRCS:.c=.o)

NAME		= libftprintf.a
LIBFT		= libft
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra

all:		$(NAME)

$(NAME):	$(OBJS)
			make -C $(LIBFT)
			cp libft/libft.a .
			mv libft.a $(NAME)
			ar rcs $(NAME) $(OBJS)
			rm -rf $(OBJS)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@ -Ilibft -I.

clean:
			rm -rf $(OBJS)
			make clean -C $(LIBFT)

fclean:		clean
			rm -rf $(NAME)
			make fclean -C $(LIBFT)

re:			fclean all

norm:
			norminette $(SRCS) ft_printf.h

normlibft:
			norminette $(SRC) $(INCLUDE) $(LIBFT) | grep -v Norme -B1 || true

test:
			$(CC) $(CFLAGS) main.c -o a.out -Ilibft -I. -L. -lftprintf
			./a.out

testclean:
			rm -rf a.out

.PHONY:		all clean fclean re norm normlibft test
