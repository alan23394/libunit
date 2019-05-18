# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2019/05/18 15:30:59 by abarnett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# Configure options

# Name of output library
NAME :=		libunit.a

# Base src directory
SRC_DIR :=		./framework
# Directories to include
INCLUDE :=		./includes ./libft/includes

# Add a -I on each INCLUDE
INCLUDE :=		$(foreach DIR, $(INCLUDE), -I$(DIR))

# Compiler and flags
CC :=			gcc
CFLAGS +=		-g -Wall -Wextra -Werror $(INCLUDE)

# Don't change below here
# **************************************************************************** #

C_OBJS :=	$(patsubst %.c,%.o,$(wildcard $(SRC_DIR)/*.c))

.PHONY:		all

all: $(NAME)
	@- ctags -R 2> /dev/null

$(NAME): $(C_OBJS)
	@ ar rc $(NAME) $(C_OBJS)
	@ ranlib $(NAME)

clean:
	@ $(RM) $(OBJS)

fclean: clean
	@ $(RM) $(NAME) tags

re: fclean all
