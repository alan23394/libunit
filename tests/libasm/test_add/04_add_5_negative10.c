/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_add_5_negative10.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 16:49:53 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_add_5_negative10(void)
{
	return (ft_add(5, -10));
}

int	add_5_negative10(void)
{
	if (test_add_5_negative10() == -5)
		return (0);
	else
		return (1);
}
