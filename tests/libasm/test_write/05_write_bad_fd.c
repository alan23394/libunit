/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_write_bad_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/04 05:37:49 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <errno.h>

int	test_write_bad_fd(void)
{
	int		ret;

	ret = ft_write(-1, "Hello", 5);
	return (errno);
}

int	write_bad_fd(void)
{
	if (test_write_bad_fd() == 9)
		return (0);
	else
		return (1);
}
