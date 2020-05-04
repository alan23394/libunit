/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_add_5_negative5.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 16:49:42 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_add_5_negative5(void)
{
	return (ft_add(5, -5));
}

int	add_5_negative5(void)
{
	if (test_add_5_negative5() == 0)
		return (0);
	else
		return (1);
}
