/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_write_truncated_string.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 23:47:03 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_write_truncated_string(void)
{
	return (ft_write(1, "stdout!", 4));
}

int	write_truncated_string(void)
{
	if (test_write_truncated_string() == 4)
		return (0);
	else
		return (1);
}
