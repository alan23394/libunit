/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_sub_negative4_negative8.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 17:15:32 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_sub_negative4_negative8(void)
{
	return (ft_sub(-4, -8));
}

int	sub_negative4_negative8(void)
{
	if (test_sub_negative4_negative8() == 4)
		return (0);
	else
		return (1);
}
