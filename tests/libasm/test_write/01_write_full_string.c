/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_write_full_string.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 23:47:00 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_write_full_string(void)
{
	return (ft_write(1, "stdout!", 7));
}

int	write_full_string(void)
{
	if (test_write_full_string() == 7)
		return (0);
	else
		return (1);
}
