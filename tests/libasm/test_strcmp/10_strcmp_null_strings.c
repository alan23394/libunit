/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_strcmp_null_strings.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/02 17:02:19 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>

int	test_strcmp_null_strings(void)
{
	int	my_ret;
	int	sys_ret;

	my_ret = ftasm_strcmp("", "");
	sys_ret = 0;
	printf("got %d, expect %d ", my_ret, sys_ret);
	fflush(0);
	return (my_ret != sys_ret);
}

int	strcmp_null_strings(void)
{
	if (test_strcmp_null_strings() == 0)
		return (0);
	else
		return (1);
}
