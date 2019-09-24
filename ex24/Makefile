# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aallali <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 18:20:10 by aallali           #+#    #+#              #
#    Updated: 2018/10/07 18:39:51 by aallali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
FILES =	srcs/*.c
OBJ = *.o

ALL: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(FILES)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean ALL
