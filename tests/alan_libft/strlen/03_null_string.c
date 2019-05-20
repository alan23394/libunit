/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_null_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 22:27:12 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/19 22:29:13 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <string.h>

static int	test_null(void)
{
	char	*str;

	str = 0;
	if (ft_strlen(str) == strlen(str))
		return (1);
	else
		return (0);
}

int			null_string(void)
{
	if (test_null())
		return (0);
	else
		return (1);
}
