/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strcpy_null_ptr_dst.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/02 12:33:31 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>
#include <string.h>

int	test_strcpy_null_ptr_dst(void)
{
	char	*new_ptr;

	new_ptr = ftasm_strcpy(0, "Hello World!");
	printf("probably should have seg faulted before this");
	fflush(0);
	return (strcmp(0, "Hello World!"));
}

int	strcpy_null_ptr_dst(void)
{
	if (test_strcpy_null_ptr_dst() == 0)
		return (0);
	else
		return (1);
}
