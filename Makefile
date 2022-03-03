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

SRCS = ft_printf.c

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
			@norminette $(SRC) $(INCLUDE) $(LIBFT) | grep -v Norme -B1 || true

test:
			echo "Testing"
.PHONY:		all clean fclean re norm test
