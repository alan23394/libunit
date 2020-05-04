/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_read_ten_chars.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 23:48:07 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>

int	test_read_ten_chars(void)
{
	char	buf[10];
	int		ret;

	ret = ft_read(0, (void *)buf, 10);
	printf(" :: read: %s", buf);
	return (ret);
}

int	read_ten_chars(void)
{
	if (test_read_ten_chars() == 10)
		return (0);
	else
		return (1);
}
