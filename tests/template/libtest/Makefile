# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/20 01:23:42 by alan              #+#    #+#              #
#    Updated: 2019/12/20 01:46:29 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Your library's makefile should compile the library as it's default rule, and
# it should also have clean and fclean rules for cleanup.

NAME :=	libtest.a

all: $(NAME)

$(NAME):
	ar rc $(NAME)
	ranlib $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
