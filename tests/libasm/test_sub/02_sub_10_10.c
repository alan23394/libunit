/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_sub_10_10.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 17:14:07 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_sub_10_10(void)
{
	return (ft_sub(10, 10));
}

int	sub_10_10(void)
{
	if (test_sub_10_10() == 0)
		return (0);
	else
		return (1);
}
