/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlen_long_string.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/13 21:45:34 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>

int	test_strlen_long_string(void)
{
	int	len;

	len = ftasm_strlen("This is a long string with 41 characters!");
	printf("got: %d ", len);
	fflush(0);
	return (len);
}

int	strlen_long_string(void)
{
	if (test_strlen_long_string() == 41)
		return (0);
	else
		return (1);
}
