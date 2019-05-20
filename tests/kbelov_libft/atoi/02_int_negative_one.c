/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_int_negative_one.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 18:41:15 by kbelov            #+#    #+#             */
/*   Updated: 2019/05/19 18:11:15 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		int_negative_one(void)
{
	if (ft_atoi("-1") == -1)
		return (0);
	else
		return (-1);
}
