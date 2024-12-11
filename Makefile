# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/11 10:48:31 by yooshima          #+#    #+#              #
#    Updated: 2024/12/11 12:11:53 by yooshima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	miniRT

SRCS		=	$(wildcard ./src/*.c)

OBJ			=	$(SRCS:.c=.o)

MLX_DIR		=	./minilibx-linux
MLX_LIB		=	$(MLX_DIR)/libmlx_Linux.a
MLX_FLAGS	=	-Lmlx -lXext -lX11

LIBFT_DIR	=	./libft
LIBFT_LIB	=	$(LIBFT_DIR)/libft.a


CFLAGS		=	-Wall -Wextra -Werror
MATH_FLAGS	=	-lm

%.o:		%.c
			${CC} ${CFLAGS} -c $< -o $@

all:			$(NAME)

$(MLX_LIB):
				${MAKE} -C $(MLX_DIR)

$(LIBFT_LIB):
				${MAKE} -C $(LIBFT_DIR)

$(NAME):		$(MLX_LIB) $(LIBFT_LIB) $(OBJ)
				$(CC) $(CFLAGS) $(MATH_FLAGS) $(OBJ) $(LIBFT_LIB) -o $(NAME) $(MLX_FLAGS) $(MLX_LIB)

clean: 
				${MAKE} -C $(MLX_DIR) clean
				${MAKE} -C $(LIBFT_DIR) clean
				rm -f $(OBJ)

fclean:			clean
				rm -f $(NAME)
				rm -r $(LIBFT_LIB)

re: 			fclean all

.PHONY: 		all clean fclean re