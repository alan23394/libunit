# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2019/05/19 17:53:51 by kbelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# Configure options

# Name of output library
NAME :=		kbelov_libft_test
# Name of libft
LIBFT :=	libft/libft.a

# Base src directory
SRC_DIR :=		.
# Test directories
TEST_DIRS :=	./atoi
# Directories to include
INCLUDE :=		../../includes ./libft/includes

# Add a -I on each INCLUDE
INCLUDE :=		$(foreach DIR, $(INCLUDE), -I$(DIR))

# Compiler and flags
CC :=			gcc
CFLAGS +=		-g -Wall -Wextra -Werror $(INCLUDE)
LDFLAGS +=		-L./libft -lft -L../../ -lunit

# Don't change below here
# **************************************************************************** #

C_OBJS :=	$(patsubst %.c,%.o,$(wildcard $(SRC_DIR)/*.c))
C_OBJS +=	$(patsubst %.c,%.o,$(wildcard $(TEST_DIRS)/*.c))

.PHONY:		all

all: $(LIBFT) $(NAME)
	@- ctags -R 2> /dev/null

$(LIBFT):
	@ make -C libft

$(NAME): $(C_OBJS)
	gcc $(CFLAGS) -o $(NAME) $(C_OBJS) $(LDFLAGS)

clean:
	@ $(RM) $(OBJS)
	@ make -C libft clean

fclean: clean
	@ $(RM) $(NAME) tags
	@ make -C libft fclean

re: fclean all
