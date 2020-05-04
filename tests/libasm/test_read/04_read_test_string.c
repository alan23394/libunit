/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_read_test_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/04 05:24:53 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>
#include <string.h>

int	test_read_test_string(void)
{
	char	buf[10] = {0};

	ft_read(0, (void *)buf, 10);
	printf(" :: read: %s", buf);
	fflush(0);
	return (strcmp(buf, "Hello\n"));
}

int	read_test_string(void)
{
	if (test_read_test_string() == 0)
		return (0);
	else
		return (1);
}
