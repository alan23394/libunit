/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_one_space.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:30:08 by kbelov            #+#    #+#             */
/*   Updated: 2019/05/19 23:23:03 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	one_space(void)
{
	if (ft_strlen(" ") == strlen(" "))
		return (0);
	else
		return (-1);
}
