/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_int_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 18:32:27 by kbelov            #+#    #+#             */
/*   Updated: 2019/05/18 19:30:50 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int		int_min(void)
{
	if (ft_atoi("-2147483648") == -2147483648)
		return (0);
	else
		return (-1);
}