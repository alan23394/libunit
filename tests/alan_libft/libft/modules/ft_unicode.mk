# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_unicode.mk                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/22 23:11:03 by alan              #+#    #+#              #
#    Updated: 2019/03/23 05:44:26 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Module name (will be printed while compiling)
NAME :=		ft_unicode

# Includes main variables
include config.mk

# Put .c files into C_SRCS
C_SRCS :=	$(wildcard $(SRC_DIR)/ft_unicode/*.c)

# Generic makefile rules for compiling a module
include compile_module.mk
