/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strcpy_null_string.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/02 12:27:25 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <string.h>

int	test_strcpy_null_string(void)
{
	char	new_str[13] = {0};
	char	*new_ptr;

	new_ptr = ftasm_strcpy(new_str, "");
	return (strcmp(new_ptr, ""));
}

int	strcpy_null_string(void)
{
	if (test_strcpy_null_string() == 0)
		return (0);
	else
		return (1);
}
