/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_write_zero_chars.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 23:47:05 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_write_zero_chars(void)
{
	return (ft_write(1, "stdout!", 0));
}

int	write_zero_chars(void)
{
	if (test_write_zero_chars() == 0)
		return (0);
	else
		return (1);
}
