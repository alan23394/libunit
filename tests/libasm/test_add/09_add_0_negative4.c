/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_add_0_negative4.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 16:52:47 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_add_0_negative4(void)
{
	return (ft_add(0, -4));
}

int	add_0_negative4(void)
{
	if (test_add_0_negative4() == -4)
		return (0);
	else
		return (1);
}
