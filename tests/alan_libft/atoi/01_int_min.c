/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_int_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/18 15:03:52 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int		int_min(void)
{
	if (ft_atoi("-2147483648") == -2147483648)
		return (0);
	else
		return (-1);
}
