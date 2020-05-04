/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_add_negative4_negative8.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 16:50:22 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_add_negative4_negative8(void)
{
	return (ft_add(-4, -8));
}

int	add_negative4_negative8(void)
{
	if (test_add_negative4_negative8() == -12)
		return (0);
	else
		return (1);
}
