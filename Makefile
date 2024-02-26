# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klakbuic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 12:59:23 by klakbuic          #+#    #+#              #
#    Updated: 2024/02/26 11:59:53 by klakbuic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = push_swap
HEADER  = ../inc/push_swap.h

CC       = cc
CFLAGS   = -Wall -Wextra -Werror

LIB      = libs/libft/libft.a libs/ft_containers/containersft.a

SRCS     = src/ft_atoi_enhanced.c src/ft_check_args.c src/ft_push.c src/ft_rorate.c \
           src/ft_rrotate.c src/ft_swap.c src/main.c src/ft_sort.c src/ft_qsort.c \
		   src/ft_sort_utils.c src/ft_stack_rpush.c src/ft_small_sort.c src/ft_sort_utils2.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(LIB):
	@make -C libs/libft --quiet
	@make -C libs/ft_containers --quiet


$(NAME): $(OBJS) $(LIB)
	$(CC) $(CFLAGS) $(OBJS) $(LIB) -I $(HEADER) -o $(NAME)

clean:
	@make clean -C libs/libft --quiet
	@make clean -C libs/ft_containers --quiet
	@$(RM) $(OBJS)
	@$(RM) $(OBJS_B)

fclean: clean
	@make fclean -C libs/libft --quiet
	@make fclean -C libs/ft_containers --quiet
	@$(RM) $(NAME) $(BONUS)

re: fclean all

.PHONY: all bonus clean  fclean re
