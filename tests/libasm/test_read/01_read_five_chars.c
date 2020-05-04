/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_read_five_chars.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 23:48:03 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>

int	test_read_five_chars(void)
{
	char	buf[5];
	int		ret;

	ret = ft_read(0, (void *)buf, 5);
	printf(" :: read: %s", buf);
	return (ret);
}

int	read_five_chars(void)
{
	if (test_read_five_chars() == 5)
		return (0);
	else
		return (1);
}
