/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 06:08:58 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/18 09:10:35 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	ft_atoi(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		flag = (*str++ == '-' ? -1 : 1);
	while (ft_isdigit(*str))
		i = (i * 10) + (*str++ - 48);
	return (i * flag);
}
