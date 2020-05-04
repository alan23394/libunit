/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_strcmp_changed_character_s2.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/02 16:36:49 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>

int	test_strcmp_changed_character_s2(void)
{
	int	my_ret;
	int	sys_ret;

	my_ret = ftasm_strcmp("Hello!", "Hella!");
	sys_ret = 14;
	printf("got %d, expect %d ", my_ret, sys_ret);
	fflush(0);
	return (my_ret != sys_ret);
}

int	strcmp_changed_character_s2(void)
{
	if (test_strcmp_changed_character_s2() == 0)
		return (0);
	else
		return (1);
}
