/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_negative.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 22:16:08 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/19 22:16:59 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	negative(void)
{
	if (ft_atoi("-15") == -15)
		return (0);
	else
		return (1);
}
