/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strdup_empty_string.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/03 03:28:11 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>
#include <stdlib.h>

int	test_strdup_empty_string(void)
{
	char	*str;
	int		ret;

	str = ftasm_strdup("");
	ret = strcmp(str, "");
	free(str);
	return (ret);
}

int	strdup_empty_string(void)
{
	if (test_strdup_empty_string() == 0)
		return (0);
	else
		return (1);
}
