/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_sub_0_negative4.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 17:16:12 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_sub_0_negative4(void)
{
	return (ft_sub(0, -4));
}

int	sub_0_negative4(void)
{
	if (test_sub_0_negative4() == 4)
		return (0);
	else
		return (1);
}
