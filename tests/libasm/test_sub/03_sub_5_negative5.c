/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_sub_5_negative5.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 17:14:37 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_sub_5_negative5(void)
{
	return (ft_sub(5, -5));
}

int	sub_5_negative5(void)
{
	if (test_sub_5_negative5() == 10)
		return (0);
	else
		return (1);
}
