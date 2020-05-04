/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_write_extra_chars.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 23:47:08 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_write_extra_chars(void)
{
	return (ft_write(1, "stdout!", 10));
}

int	write_extra_chars(void)
{
	if (test_write_extra_chars() == 10)
		return (0);
	else
		return (1);
}
