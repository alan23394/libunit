/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_int_zero.c                  	                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 18:41:15 by kbelov            #+#    #+#             */
/*   Updated: 2019/05/18 23:08:03 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int		int_zero(void)
{
	if (ft_atoi("0") == 0)
		return (0);
	else
		return (-1);
}