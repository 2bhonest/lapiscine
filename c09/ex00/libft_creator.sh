# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yejung <yejung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/18 22:40:34 by yejung            #+#    #+#              #
#    Updated: 2026/08/18 22:41:04 by yejung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc -Wall -Wextra -Werror -c ft_putchar.c ft_strcmp.c ft_swap.c ft_putstr.c ft_strlen.c
ar rc libft.a ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o
rm -f ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o