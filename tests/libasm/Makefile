# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 12:07:17 by alan              #+#    #+#              #
#    Updated: 2020/05/04 07:23:40 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# Configure options

# Name of test executable
NAME :=			test_lib
# Test directories
TEST_DIRS :=	./test_strlen \
				./test_strcpy \
				./test_strcmp \
				./test_strdup \
				./test_write \
				./test_read

# Library directory to be tested
LIB_DIR :=		./libasm
# Linker name for your library (-l will be prepended)
LIB :=			asm
# Location of library file
LIB_NAME :=		$(LIB_DIR)/lib$(LIB).a

# Directories to include
INCLUDES :=		../../includes $(LIB_DIR)/includes
# Add a -I to each of the INCLUDES directories for compiler flags
INCLUDES :=		$(foreach DIR, $(INCLUDES), -I$(DIR))

# Compiler and flags
CC :=			clang
#CFLAGS +=		-Wall -Wextra -Werror $(INCLUDES)
CFLAGS +=		$(INCLUDES)
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
	- ctags -R

$(NAME): $(LIB_NAME) $(C_OBJS) $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(C_OBJS) $(TEST_OBJS) $(LDFLAGS)

$(LIB_NAME):
	$(MAKE) -C $(LIB_DIR)

clean:
	$(RM) $(C_OBJS) $(TEST_OBJS) tags
	$(MAKE) -C $(LIB_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIB_DIR) fclean

re: fclean all
