# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 12:07:17 by alan              #+#    #+#              #
#    Updated: 2019/12/20 02:18:57 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# This is a template makefile to test a library. Change the variables in the
# first section to work with your library and your test directories, and the
# lower section will compile everything for you. It assumes you have a makefile
# in your library folder, and it will attempt to run it to create your library
# first before compiling your unit tests (look at the template Makefile in the
# libtest folder, it has more details). "make test" will compile everything,
# and then run the test suite.

# **************************************************************************** #
# Configure options

# Name of test executable
NAME :=			test_lib
# Test directories
TEST_DIRS :=	./test_a ./test_b

# Library directory to be tested
LIB_DIR :=		./libtest
# Linker name for your library (-l will be prepended)
LIB :=			test
# Location of library file
LIB_NAME :=		$(LIB_DIR)/lib$(LIB).a

# Directories to include
INCLUDES :=		../../includes $(LIB_DIR)/includes
# Add a -I to each of the INCLUDES directories for compiler flags
INCLUDES :=		$(foreach DIR, $(INCLUDES), -I$(DIR))

# Compiler and flags
CC :=			gcc
CFLAGS +=		-g -Wall -Wextra -Werror $(INCLUDES)
LDFLAGS +=		-L../../ -lunit -L$(LIB_DIR) -l$(LIB)

# Don't change below here
# **************************************************************************** #

C_SRCS :=		main.c
C_OBJS :=		main.o
TEST_SRCS :=	$(foreach DIR,$(TEST_DIRS),$(wildcard $(DIR)/*.c))
TEST_OBJS :=	$(patsubst %.c,%.o,$(TEST_SRCS))

.PHONY:			all test clean fclean re

all: tags $(NAME)

test: $(NAME)
	./$(NAME)

tags: $(C_SRCS) $(TEST_SRCS)
	- ctags -R 2> /dev/null

$(NAME): $(LIB_NAME) $(C_OBJS) $(TEST_OBJS)
	gcc $(CFLAGS) -o $(NAME) $(C_OBJS) $(TEST_OBJS) $(LDFLAGS)

$(LIB_NAME):
	$(MAKE) -C $(LIB_DIR)

clean:
	$(RM) $(C_OBJS) $(TEST_OBJS) tags
	$(MAKE) -C $(LIB_DIR) clean

fclean:
	$(RM) $(NAME) $(C_OBJS) $(TEST_OBJS) tags
	$(MAKE) -C $(LIB_DIR) fclean

re: fclean all
