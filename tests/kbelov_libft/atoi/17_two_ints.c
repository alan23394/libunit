/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   17_two_ints.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 18:32:27 by kbelov            #+#    #+#             */
/*   Updated: 2019/05/19 18:18:41 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		two_ints(void)
{
	if (ft_atoi("100 200") == atoi("100 200"))
		return (0);
	else
		return (-1);
}
