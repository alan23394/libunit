/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_strcmp_null_ptr_s1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/02 16:36:54 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>

int	test_strcmp_null_ptr_s1(void)
{
	int	my_ret;

	my_ret = ftasm_strcmp(0, "Hello World!");
	printf("should have seg faulted by now");
	fflush(0);
	return (my_ret);
}

int	strcmp_null_ptr_s1(void)
{
	if (test_strcmp_null_ptr_s1() == 0)
		return (0);
	else
		return (1);
}
