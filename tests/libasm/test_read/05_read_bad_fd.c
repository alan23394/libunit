/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_read_bad_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/04 04:57:45 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <errno.h>

int	test_read_bad_fd(void)
{
	char	buf[5];
	int		ret;

	ret = ft_read(-1, (void *)buf, 5);
	return (errno);
}

int	read_bad_fd(void)
{
	if (test_read_bad_fd() == 9)
		return (0);
	else
		return (1);
}
