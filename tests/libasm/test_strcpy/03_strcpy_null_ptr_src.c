/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strcpy_null_ptr_src.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/02 12:31:18 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>
#include <string.h>

int	test_strcpy_null_ptr_src(void)
{
	char	new_str[13] = {0};
	char	*new_ptr;

	new_ptr = ftasm_strcpy(new_str, 0);
	printf("probably should have seg faulted before this");
	fflush(0);
	return (strcmp(new_ptr, 0));
}

int	strcpy_null_ptr_src(void)
{
	if (test_strcpy_null_ptr_src() == 0)
		return (0);
	else
		return (1);
}
