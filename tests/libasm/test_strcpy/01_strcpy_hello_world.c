/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcpy_hello_world.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/02 06:26:40 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <string.h>

int	test_strcpy_hello_world(void)
{
	char	new_str[13] = {0};
	char	*new_ptr;

	new_ptr = ftasm_strcpy(new_str, "Hello World!");
	return (strcmp(new_ptr, "Hello World!"));
}

int	strcpy_hello_world(void)
{
	if (test_strcpy_hello_world() == 0)
		return (0);
	else
		return (1);
}
