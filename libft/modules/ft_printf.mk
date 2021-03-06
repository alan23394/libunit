# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_printf.mk                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/22 23:11:03 by alan              #+#    #+#              #
#    Updated: 2019/03/23 04:35:22 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Module name (will be printed while compiling)
NAME :=		ft_printf

# Includes main variables
include config.mk

# Put .c files into C_SRCS
C_SRCS :=	$(wildcard $(SRC_DIR)/ft_printf/*.c)
C_SRCS +=	$(wildcard $(SRC_DIR)/ft_printf/flags/*.c)

# Generic makefile rules for compiling a module
include compile_module.mk
