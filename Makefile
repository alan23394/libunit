# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2019/05/19 18:29:14 by abarnett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# Configure options

# Name of output library
NAME :=		libunit.a
# Libft directory
LIBDIR :=	libft
# Name of libft
LIBFT :=	$(LIBDIR)/libft.a

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
L_OBJS :=	$(shell find $(LIBDIR) -name "*.o")

.PHONY:		all

all: $(LIBFT) $(NAME)
	@- ctags -R 2> /dev/null

$(LIBFT):
	@ make -C libft

$(NAME): $(C_OBJS)
	ar rc $(NAME) $(C_OBJS) $(L_OBJS)
	ranlib $(NAME)

clean:
	@ $(RM) $(C_OBJS)
	@ make -C libft clean

fclean: clean
	@ $(RM) $(NAME) tags
	@ make -C libft fclean

re: fclean all
