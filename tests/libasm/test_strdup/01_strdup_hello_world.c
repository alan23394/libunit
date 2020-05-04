/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strdup_hello_world.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/03 00:46:56 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>
#include <stdlib.h>

int	test_strdup_hello_world(void)
{
	char	*str;
	int		ret;

	str = ftasm_strdup("Hello World!");
	ret = strcmp(str, "Hello World!");
	free(str);
	return (ret);
}

int	strdup_hello_world(void)
{
	if (test_strdup_hello_world() == 0)
		return (0);
	else
		return (1);
}
