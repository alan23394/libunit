/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_normal_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 22:22:27 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/19 22:28:49 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <string.h>

static int	test_normal(void)
{
	char	*str;

	str = ft_strdup("test string, len of 22");
	if (ft_strlen(str) == strlen(str))
		return (1);
	else
		return (0);
}

int			normal_string(void)
{
	if (test_normal())
		return (0);
	else
		return (1);
}
