/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_read_zero_chars.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 23:51:05 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_read_zero_chars(void)
{
	char	buf[5];
	int		ret;

	ret = ft_read(0, (void *)buf, 0);
	return (ret);
}

int	read_zero_chars(void)
{
	if (test_read_zero_chars() == 0)
		return (0);
	else
		return (1);
}
