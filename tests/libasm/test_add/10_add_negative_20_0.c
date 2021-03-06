/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_add_negative_20_0.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 16:54:23 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_add_negative_20_0(void)
{
	return (ft_add(-20, 0));
}

int	add_negative_20_0(void)
{
	if (test_add_negative_20_0() == -20)
		return (0);
	else
		return (1);
}
